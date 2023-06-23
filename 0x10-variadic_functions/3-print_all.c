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
	
