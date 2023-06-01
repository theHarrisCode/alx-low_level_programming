#include "main.h"
/**
 * _strcpy - copies string from src to dest
 * @src: source string comes from
 * @dest: destination of string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= n; j++)
	{
		*(dest + j) = src[j];
	return (dest);
}
