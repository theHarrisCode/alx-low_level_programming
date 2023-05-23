#include "main.h"
/**
 * print_sign -  prints the sign of integer @n
 * @n: number to be checked
 * Return: 1 (Positive) 0 (Zero) -1 (Negative)
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return(1);
	}
}
