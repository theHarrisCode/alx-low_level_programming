#include "main.h"
/**
 * more_numbers - prints 0 to 14 ten times
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j <= 15)
		{
			if (i < 10)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
	}
}
