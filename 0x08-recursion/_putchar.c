#include <unistd.h>

/**
 * _putchar-writes "c" to the standard output.
 * @c:The char to print.
 *
 * Return:Regarding accomplishment 1.
 * When something goes wrong, -1 is returned and errno is properly set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
