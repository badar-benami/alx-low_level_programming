#include "main.h"
#include <unistd.h>
/**
 * _putchar---writes "c" to the standard output.
 * @c:The character to print.
 *
 * Return:Regarding accomplishment one.
 * On error, -one is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
