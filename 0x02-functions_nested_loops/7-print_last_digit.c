#include "main.h"
/**
 * print_last -  prints last digit of a number
 * @n: number to be used
 * Return: @lst_dig
 */
int print_last_digit(int n)
{
	int lst_dig;

	lst_dig = n % 10;
	_putchar('0' + lst_dig);
        return (lst_dig);
}
