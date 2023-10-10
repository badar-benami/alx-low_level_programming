#include "main.h"

/**
 * print_alphabet_x10-Prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	char ch;
	int R;

	R = 0;

	while (R < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		R++;
	}
}
