#include "main.h"

/**
 * print_most_numbers -  checks for checks for a digit (zero through 9).
 *
 * Return: Always zero.
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
