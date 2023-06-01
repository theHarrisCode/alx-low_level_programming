#include "main.h"
/**
 * _strncat - concatnates string from using at most n bytes
 * @dest: concated string
 * @src: string to concate
 * @n: amount of bytes to be used
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, l;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	l = 0;
	for (j = i; j < n + i ; j++)
	{
		*(dest + j) = *(src + l);
		l++;
	}
	return (dest);
}
