#include "main.h"
/**
 * _strcpy - copies string from src to dest
 * @src: source string comes from
 * @dest: destination of string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}
