#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: number to do factorial expression on
 * Return: factorial @value
 */
int factorial(int n)
{
	int value;

	if (n < -1)
		return (-1);
	else if (n == 0)
		return (1);
	value = n * factorial(n - 1);
	return (value);
}
