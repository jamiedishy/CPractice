#include <stdio.h>
#include <stdlib.h>

int main()
{
	float n;
	float r;
	scanf("%f %f", &n, &r);

	float i = 1; // iterator
	float j = 1;
	float nCr = n / r;

	while (i < n && j < r)
	{
		nCr = nCr * (((n - i)) / (r - j));
		i++;
		j++;
	}
	printf("%f\n", nCr);
	
	return 0;
}
