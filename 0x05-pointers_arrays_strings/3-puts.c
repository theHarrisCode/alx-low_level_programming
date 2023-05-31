#include "main.h"
/**
 * _puts - prints a string and new line to standard output
 * @str: string to be printed
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
