#include <stdio.h>

/**
 * main-Lists all natural numbers less than 1024 (excluded).
 * that are multiples of three or five.
 *
 * Return:Always ZERO.
 */
int main(void)
{
	int R, sum = 0;

	for (R = 0; R < 1024; R++)
	{
		if ((R % 3) == 0 || (R % 5) == 0)
			sum += R;
	}

	printf("%d\n", sum);

	return (0);
}
