#include <stdio.h>
#include <stdlib.h>

int main() {
	int input;
	int index = 0;
	char ch;
	int i;
	FILE *pointerInput, *pointerOutput, *pointerEncrypted;
	
	printf("input an int!");
	scanf("%d", &input);
//	int number = input;
//	printf("This is the value of number: %d", number);

	pointerInput = fopen("practice2.txt", "r");
	if (pointerInput == NULL) printf("Error opening\n");

	pointerOutput = fopen("practice2output.txt", "w");

	while (1) {
		ch = fgetc(pointerInput);
		if (index-1 == input) {
			fprintf(pointerOutput, "\n");
			index = 0;
		}
		else if (ch == EOF) {
			break;
		}
		else {
			fputc(ch, pointerOutput);
			index++;
		}
		//printf("THIS IS THE %d\n", index);
	}
// now i need to read from the output file and encrypt it
        char ch2;
	int index2 = 0;
	FILE *pointerOutputRead;
	pointerOutputRead = fopen("practice2output.txt", "r");
	pointerEncrypted = fopen("practice2encrypted.txt", "w");
	while(1) {
		ch2 = fgetc(pointerOutputRead);
		if (index2 == 0) {
			fputc(ch2, pointerEncrypted);
		}
		else if (ch2 == EOF) {
			break;
		}
		else if (ch2 == '\n') {
			index2 = 0;
		}
		else {
			fputc(ch2, pointerEncrypted);
			index2++;
		}
	}
}




