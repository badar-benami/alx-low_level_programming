#include <stdio.h>
#include "main.h"

/**
 * main---prints the name of the program.
 * @argc:nmbr of arguments.
 * @argv:array of arguments.
 *
 * Return: Always zero (Success).
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
