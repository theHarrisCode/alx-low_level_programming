#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times
 */
void times_table(void)
{
	int a, b, product;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			product = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product >= 10)
				{
					_putchar((product / 10) + '0');
				}
				else
				{
					_putchar(' ');
				}
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
}
