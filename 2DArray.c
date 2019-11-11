#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int j;
	int maxnum;
	int maxcolumn;

	int a[3][5];

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	maxnum = a[0][0];
	maxcolumn = 0;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			if (a[i][j] > maxnum) {
				maxnum = a[i][j];
				maxcolumn = j;
			}
		}
	}

	printf("The maximum number is %d and its column is %d\n", maxnum, maxcolumn);

}




