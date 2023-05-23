#include "main.h"
/**
 * print_last_digit -  prints last digit of a number
 * @n: number to be used
 * Return: @lst_dig
 */
int print_last_digit(int n)
{
	int lst_dig;

	if (n < 0)
	{
		n = n * -1;
	}
	lst_dig = n % 10;
	if (lst_dig < 0)
	{
		lst_dig = lst_dig * -1;
	}
	_putchar('0' + lst_dig);
	return (lst_dig);
}
