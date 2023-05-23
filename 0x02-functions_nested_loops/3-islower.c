#include "main.h"
/**
 * islower - checks if character is a lowercase letter
 * @c: character to be checked
 * Return: 1 (Success) 0 (None Found)
 */
int _islower(int c)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		if (c == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
