#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @n: integer to be computed with
 * Return: Always (@n)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
	{
		return (n);
	}
}
