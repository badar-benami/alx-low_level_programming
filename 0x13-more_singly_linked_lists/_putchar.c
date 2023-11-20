#include <unistd.h>

/**
 * _putchar --- puts "c" to the standard output.
 * @c: The char to print.
 *
 * Return: On success one.
 * Errno is set correctly and -1 is given in the event of an error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
