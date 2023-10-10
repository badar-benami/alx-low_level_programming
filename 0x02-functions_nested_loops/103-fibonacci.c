#include <stdio.h>

/**
 * main-discovers and prints the sum of even-valued terms.
 * following a new line.
 * Return: Always ZERO (Success).
 */
int main(void)
{
	int R;
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (R = 1; R <= 33; ++R)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}

	printf("%lu\n", sum);

	return (0);
}
