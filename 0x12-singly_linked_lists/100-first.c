#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first--- prints a phrase before to the primary.
 * function is carried out.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
