#include "main.h"

/**
 * jack_bauer-publishes every minute of Jack Bauer's day.
 * start from 12:00 AM to 11:59AM.
 */
void jack_bauer(void)
{
	int R, j;

	R = 0;

	while (R < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((R / 10) + '0');
			_putchar((R % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		R++;
	}
}
