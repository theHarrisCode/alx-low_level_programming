#include "main.h"
/**
 * _strcat - concats string and returns value
 * @dest: new string to concat
 * @src: original string
 * Return: new string (src + dest)
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k, l;

	i = 0;
	while (*(src + i) != '\0')
	{
		i++;
	}
	j = 0;
	while (*(dest + j) != '\0')
	{
		j++;
	}
	l = 0;
	for (k = j; k < i + j; k++)
	{
		*(dest + k) = *(src + l);
		l++;
	}
	*(dest + k) = '\0';
	return (dest);
}
