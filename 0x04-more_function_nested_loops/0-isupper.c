#include "main.h"
/**
 * _isupper - function that checks if character is uppercase
 * @c: character to be checked
 * Return: 1(Pass) 0(Fail)
 */
int _isupper(int c)
{
	int i;

	i = 'A';
	while (i <= 'Z')
	{
		if (c == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
