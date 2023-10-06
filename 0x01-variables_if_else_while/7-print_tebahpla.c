#include <stdio.h>

/**
 * main - prints the lowercase alphabet backwards,
 * following a new line
 * Return: Always zero (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

