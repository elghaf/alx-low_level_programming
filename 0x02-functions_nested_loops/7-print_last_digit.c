#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @digit_num: The integer to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int digit_num)
{
	int last_digit;

	if (digit_num < 0)
		digit_num = -digit_num;

	last_digit = digit_num % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}
