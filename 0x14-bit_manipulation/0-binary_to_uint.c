#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string containing charcaters of 0 and 1
 * Return: the converted number, or 0 if b is null or 0 or 1 is not in b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int start = 1, num = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (*(b + i) != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num += (b[i] - '0') * start;
		start *= 2;
	}
	return (num);
}
