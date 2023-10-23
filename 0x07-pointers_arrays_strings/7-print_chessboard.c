#include "main.h"
/**
 * print_chessboard---Entry point.
 * @a:array.
 * Return: Always ZERO (Success).
 */
void print_chessboard(char (*a)[8])
{
	int I;
	int j;

	for (I = 0; I < 8; I++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[I][j]);
		_putchar('\n');
	}
}
