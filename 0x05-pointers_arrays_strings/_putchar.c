#include <main.h>

/**
 * _putchar-Writes the character C to stdout.
 * @c:The char to print.
 *
 * Return:On success One.
 * On Error,-1 is returned,and Errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
