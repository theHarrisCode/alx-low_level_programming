#include "main.h"
/**
 * print_alphabet - prints alphabet using created header file and only putchar
 */
void print_alphabet(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
