#include <stdio.h>
#include <stdlib.h>

void main() {
	int N;
	int i;
	int maxi;
	int maxval;

	scanf("%d", &N);

	int Arr[N];

	for (i = 0; i < N; i++) {
		scanf("%d", &Arr[i]);
	        maxi = 0;
	        maxval = Arr[0];
	}
	for (i = 1; i < N; i++) {
		if (Arr[i] > maxval) {
			maxval = Arr[i];
			maxi = i;
		}
	}
	printf("The max value is %d and is in location %d\n", maxval, maxi);

}



