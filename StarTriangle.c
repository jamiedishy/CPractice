#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;
	scanf("%d", &N);

	int i;
	int j;
	for (i = 1; i <= N; i++) {
		for (j = i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}	

}





