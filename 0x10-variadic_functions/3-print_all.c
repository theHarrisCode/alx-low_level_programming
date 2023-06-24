#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything that is passed
 * @format: a list of types of arguments passed to function
 */
void print_all(const char * const format, ...)
{
	va_list argmt;
	int n = 0;
	char *str, *separator = "";

	va_start(argmt, format);
	if (format)
	{
		while (*(format + n))
		{
			switch (*(format + n))
			{
			case 'c':
				printf("%s%c", separator, va_arg(argmt, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(argmt, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(argmt, double));
				break;
			case 's':
				str = va_arg(argmt, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				n++;
				continue;
			}
			n++;
			separator = ", ";
		}
	}
	printf("\n");
	va_end(argmt);
}
