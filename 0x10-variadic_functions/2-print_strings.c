#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints strings.
* @separator: The string printed seperator.
* @n: num of strings.
* @...: var number of strings to be dispaly.
*
* Description: logic If separator is NULL, it is not printed.
*              If one of the strings if NULL, (nil) is printed instead.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list printed_strings;
char *sting_s;
unsigned int i;

va_start(printed_strings, n);

while (i < n)
{
    /* code */
sting_s = va_arg(printed_strings, char *);
if (sting_s == NULL)
printf("(nil)");
else
printf("%s", sting_s);

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
i++;
}
printf("\n");
va_end(printed_strings);
}
