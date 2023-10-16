#include "main.h"
#include <stdio.h>

/**
 * main - writes a new line for each number from 1 to 100.
 * but Fizz is used in place of the nmbr for multiples of three prints.
 * as well as Buzz for the multiples of five prints.
 * Return: Always zero (Success).
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
