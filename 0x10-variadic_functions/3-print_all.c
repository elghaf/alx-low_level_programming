#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints any you want.
* @format: list_param all type of arguments passed in function.
*/
void print_all(const char * const format, ...)
{
int j = 0;
char *strings_s, *sperator = "";

va_list list_param;

va_start(list_param, format);

if (format)
{
while (format[j])
{
switch (format[j])
{
case 'c':
printf("%s%c", sperator, va_arg(list_param, int));
break;
case 'i':
printf("%s%d", sperator, va_arg(list_param, int));
break;
case 'f':
printf("%s%f", sperator, va_arg(list_param, double));
break;
case 's':
strings_s = va_arg(list_param, char *);
if (!strings_s)
strings_s = "(nil)";
printf("%s%s", sperator, strings_s);
break;
default:
j++;
continue;
}
sperator = ", ";
j++;
}
}
printf("\n");
va_end(list_param);
}