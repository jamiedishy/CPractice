#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char *binstring;
    binstring = malloc(256);

    scanf("%s", binstring);
    int i;
    int bestsol = 0;
    int bestsuff = 0;

    for (i=0; binstring[i] != '\0'; i++) {
            if (binstring[i] != '1' && binstring[i] != '0') {
                printf("Invalid string\n");
                break;
            }
            else if (binstring[i]=='1') {
                bestsuff = bestsuff + 1;
                if (bestsol<bestsuff) {
                    bestsol=bestsuff;
                }
            }
           else if (binstring[i]=='0') {
                bestsuff=0;
            }
    }
    printf("%d", bestsol);

    return 0;
}