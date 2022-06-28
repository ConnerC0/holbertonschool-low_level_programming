#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by new line
 * @separator: separator to print between strings
 * @n: num of args
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *str;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n && i < n - 1)
			printf("%s", separator);
	}
	_putchar('\n');
	va_end(ap);
}
