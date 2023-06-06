#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: where memory will be copied to
 * @src: where the memory will be copied from
 * @n: how much memroy to be copied
 * Return: point to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j;

	j = n;
	for (i = 0; i < j; i++)
	{
		*(dest + i) = *(src + i);
		n--;
	}
	return (dest);
}
