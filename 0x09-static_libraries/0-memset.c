#include "main.h"
/**
 * _memset - fills the first @n bytes of @s with @b
 * @s: represents the pointer to be manipulated
 * @b: character used
 * @n: how many bytes in memory to fill
 * Return: pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
