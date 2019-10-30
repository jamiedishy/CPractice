#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


#define maxchar 5

int main() //needs main
{
char ch;
char fname[maxchar];
FILE *fpointerlab6b, *fpointeroutputencrypted;

printf("Please enter the key: \n");
//scanf("%s", fname);
fgets(fname, 6, stdin);

int i;
for (i=0;i<5;i++) {
    if (fname[i] == '\n') {
        fname[i] = 'a';
        if (i < 5) {
            for (; i < 5; i++) {
                fname[i] ='a';
            }
        }
    }
}
printf("%s", fname);


fpointerlab6b = fopen("lab6b.txt", "r");

if (fpointerlab6b == NULL) printf("Error opening\n");
//if (fname[0]=='\n') fname[0] = 'a'; NOT WORKING, CHANGE \N TO 'a'
//printf("%s", fname);


fpointeroutputencrypted = fopen("outputb.txt", "w");

while(1) {
    ch = fgetc(fpointerlab6b);
    if (ch == EOF) {
        break;
    }
    else {
        ch = ch + 100;
        fputc(ch, fpointeroutputencrypted);
    }
}
    return 0; // if return 1, then there's an error
}
