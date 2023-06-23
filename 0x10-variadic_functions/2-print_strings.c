#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by new line
 * @separator: string to be printed in between strings
 * @n: number of integers passed to func
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *str;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (1 != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
