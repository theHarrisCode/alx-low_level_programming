#include "main.h"
/**
 * _isdigit - function that checks for a digit
 * @c: variable to be checked
 * Return: 1(Pass) 0(Fail)
 */
int _isdigit(int c)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		if (c == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
