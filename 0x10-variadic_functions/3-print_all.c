#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *str;
	int i = 0;
	bool flag;

	while (format)
	{
		va_start(ap, format);
		while (format[i])
		{
			flag = 1;
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(ap, int));
					break;
				case 'i':
					printf("%i", va_arg(ap, int));
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s", str);
					break;
				default:
					flag = 0;
					break;
			}
				if (format[i + 1] && flag)
					printf(", ");
				i++;
		}
		va_end(ap);
		break;
	}
	_putchar('\n');
}
