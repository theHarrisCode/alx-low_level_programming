#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums up all of the integers in the parameter
 * @n: number to be added to sum
 * Return: sum of all paramters, 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(nums, n);
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
