#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() //needs main
{
    FILE * fPointer1;
    fPointer1 = fopen("sample.txt", "r");
   if(fPointer1==NULL) printf("Error opening\n");

   char replacingValue1 = '1';
   char replacingValue2 = '6';
   char c;

   FILE * fPointer2;
   fPointer2 = fopen("output.txt", "w"); //output.txt is where we'll write to

   c = fgetc(fPointer1);
   while(c != EOF) {
    if (c == '\n') {
        fputc(replacingValue1, fPointer2);
        fputc(replacingValue2, fPointer2);
    }
    else {
        fputc(c, fPointer2);
    }
    c = fgetc(fPointer1);
   }
return 0;
}
