#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: separator for nums
 * @n: num of args
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, num;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (i < n && i < n - 1)
			printf("%s", separator);
	}
	_putchar('\n');
	va_end(ap);
}
