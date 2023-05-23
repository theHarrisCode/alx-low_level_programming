#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabet w/newline 10 times
 * Return: None (Void)
 * Parameters: None
 */
void print_alphabet_x10(void)
{
	/**
	 * This program will act the same as printing alphabet but now enclosed
	 * in a for loop.
	 */
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
