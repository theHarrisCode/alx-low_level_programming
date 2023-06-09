#include "main.h"
/**
 * _strspn - length of a prefix substring
 * @s: string to be checked
 * @accept: character to check with
 * Return: @count (amount of bytes in memory used)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i, j;

	count = 0;
	i = 0;
	while (*(s + i) != ' ')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(accept + j) == *(s + i))
				count++;
			j++;
		}
		i++;
	}
	return (count);
}
