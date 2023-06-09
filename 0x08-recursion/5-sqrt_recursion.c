#include "main.h"
/**
 * _sqrt_recursion - finds square root of @n if it's a natural number, recursion
 * @n: number to be checked
 * Return: @value of the square root
 */
int _power(int n, int i)
{
	if (i > n)
		return (-1);
	else if (i * i != n)
		_power(n, i + 1);
        return (i);
}
int _sqrt_recursion(int n)
{
	int i;

	i = 1;
	return (_power(n, i));
}
