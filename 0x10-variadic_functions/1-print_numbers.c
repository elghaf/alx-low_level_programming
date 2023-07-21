#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Prints numbers as mentied.
* @separator: The string to be display.
* @n: The number of int.
* @...: A variable number of numbers to be printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list numbers;
unsigned int i = 0;

va_start(numbers, n);

while (i < n)
{
    /* code */
printf("%d", va_arg(numbers, int));

if (separator != NULL && i != (n - 1) )
printf("%s", separator);
i++;
}
printf("\n");
va_end(numbers);
}
