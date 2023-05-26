#include "main.h"
/**
 * print_diagnol - prints diagnoal line
 * @n: amount out times \ is printed
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			j = 0;
			while(j < i)
			{
				_putchar(' ');
				j++;
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
}
