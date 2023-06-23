#include "main.h"

/**
 * jack_bauer - Prints every minute of the day Jack Bauer starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
int start, finish;

start= 0;

while (start< 24)
        {
        finish= 0;
        while (finish< 60)
            {
                _putchar((start/ 10) + '0');
                _putchar((start% 10) + '0');
                _putchar(':');
                _putchar((finish/ 10) + '0');
                _putchar((finish% 10) + '0');
                _putchar('\n');
                finish++;
            }
        start++;
        }
}
