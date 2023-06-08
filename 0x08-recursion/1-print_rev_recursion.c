#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be reversed
 */
void _print_rev_recursion(char *s)
{
/**	int i, j;
 *
 *	//i = 0;
 */
	/**char c;*/
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
