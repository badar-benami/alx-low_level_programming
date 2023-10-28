#include <stdio.h>
#include "main.h"

/**
 *_putchar---writes the char c to stdout.
 * @c:Ther char to print.
 *
 * Return: On success one.
 * On error, -one is returned and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
