#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
   int output = 0;
   int digit;
   int input;

   scanf("%d", &input);

    while (input > 0) {
        int digit = input % 10;
        output = output*10 + digit;
        input /= 10;
    }
   printf("%ld\n", output);

    return 0;
}