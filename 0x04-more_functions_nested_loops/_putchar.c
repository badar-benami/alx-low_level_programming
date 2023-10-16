#include "main.h"
#include <unistd.h>
/**
 * _Putchar-puts "c" to the standard output.
 * @c: The text to be printed.
 *
 * Return:On success (1).
 * Errno is set correctly and -1 is given in the event of an error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
