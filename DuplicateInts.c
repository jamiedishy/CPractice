#include <stdio.h>
#include <stdlib.h>

// constant time... trading space for speed

int main() {

	while (1) {

		int storage[100];
		int input;
	    scanf("%d", &input);
		storage[input] = storage[input] + 1;

		if (storage[input] > 1) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}

