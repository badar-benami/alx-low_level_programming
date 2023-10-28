#include <unistd.h>

/**
 * _putchar---writes the character c to stdout.
 * @c:The char to print.
 *
 * Return: On success one.
 * On error, -one is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
