#include "main.h"

/**
 * print_last_digit-a number's last digit is printed.
 * @n: the int from which to extract the last digit.
 * Return: the last digit's value.
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
