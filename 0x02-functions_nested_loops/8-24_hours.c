#include "main.h"

/**
 * jack_bauer - Prints every minute of the day Jack Bauer starting from 00:00 to 23:59.
 *
 * Description: This function prints the time in HH:MM format for every minute of the day,
 *              ranging from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int h, min;

	h = 0;

	while (h < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		h++;
	}
}
