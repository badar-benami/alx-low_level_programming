#include <stdio.h>
#include "main.h"

/**
 * main---print the nmbr of arguments passed to the program.
 * @argc:number of arguments.
 * @argv:array of arguments.
 *
 * Return:Always zero (Success).
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
