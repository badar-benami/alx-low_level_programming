#include "function_pointers.h"

/**
 * print_name --- Prints a name.
 * @name: The string name.
 * @f: The pointer to the printing function.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
