#include "main.h"
/**
 * _sqrt_recursion - finds square root of @n if it's a natural number, recursion
 * @n: number to be checked
 * Return: @value of the square root
 */
int _sqrt_recursion(int n)
{
	int value;

	value = n;
	if ((n * n) != value) /**base case*/
		return (-1);
	return _sqrt_recursion(n - 1);
}
