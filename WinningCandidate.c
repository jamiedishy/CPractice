#include <stdio.h>
#include <stdlib.h>


#define ROW 5
#define COLUMN 4

int main() {
	int sumcolA = 0;
	int sumcolB = 0;
	int sumcolC = 0;
	int sumcolD = 0;
	int arr[ROW][COLUMN];


	FILE * fp;
	fp = fopen("midterm2file.txt", "r");
	if (fp == NULL) { printf("Error\n"); }

	int index = 0;
	int value;

	int ii, jj;

	for (ii = 0; ii < ROW; ii++) {
		for (jj = 0; jj < COLUMN; jj++) {
			if (fscanf(fp, "%d", &arr[ii][jj]) != 1) {
					exit(1);
			}
		}
	}

	for (ii = 0; ii < ROW; ii++) {
		for (jj = 0; jj < COLUMN; jj++) {
			if (jj == 0) {
				sumcolA += arr[ii][jj];
				printf("%d\n", arr[ii][jj]);
			}
			else if (jj == 1) {
				sumcolB += arr[ii][jj];
			}
			else if (jj == 2) {
				sumcolC += arr[ii][jj];
			}
			else {
				sumcolD += arr[ii][jj];
			}

	//		printf("%d", arr[ii][jj]);
	//		printf("\n");
		}
	}
	printf("sumA is %d sumB is %d sumC is %d sumD is %d\n", sumcolA, sumcolB, sumcolC, sumcolD);



}



