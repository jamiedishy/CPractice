#include <stdio.h>
#include <stdlib.h>

int main() {
	char input[10000];
	printf("please enter a sentence and ill find average word length: \n");
	fgets(input, 10000, stdin);

	int i = 0;
	int sum = 0;
	int wordcount = 0;

	while (1) {
		if (input[i] == ' ') {
			wordcount++;
			i++;
		}
		else if (input[i] == '\0') {
			wordcount++;
			break;
		}
		else {
			sum += 1;
			i++;
		}
	}
	sum -= 1;
	printf("the value of sum is %d\n", sum);
	printf("the value of wordcount is %d\n", wordcount);

	int average = sum / wordcount;
	printf("the average is %d\n", average);

}






