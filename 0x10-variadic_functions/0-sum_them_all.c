#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of param.
 * @n: The n of param in the func.
 * @...: var number of param.
 * Return: if n Null.
 *      the sum of all params.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, sum = 0;

	va_start(ap, n);

	while (i < n)
    {
        /* code */
        sum += va_arg(ap, int);
        i++;
    }
	va_end(ap);
	return (sum);
}
