#include "main.h"
/**
 * print_rev - string in reverse with new line
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + (i + 1)) == '\0')
		{
			for (j = i; j >= 0; j--)
			{
				_putchar(*(s + j));
			}
		}
		i++;
	}
	_putchar('\n');
}
