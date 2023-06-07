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
	char c;
	if (*s == s[-1])
	{
		_putchar('\n');
		return;
	}
	else
	{
		s++;
		if (*s == '\0')
			c = '\0';
		if (c == '\0')
			_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
