#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: string to be copied on
 * @src: string to copy
 * @n: number of characters to copy
 * Return: @dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src +i);
	}
	for ( ; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
