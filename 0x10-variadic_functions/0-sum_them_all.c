#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: number of param
 * Return: sum of param
 */

 int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	va_start(ap, n);
	for(i = 0; i < n; i++)
		sum += va_arg(ap, int);
	if (n == 0)
		return (0);
	va_end(ap);
	return (sum);
}
