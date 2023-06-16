#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char using malloc
 * @size: size of the array
 * @c: character for the array
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	else if (c || c == '\0')
	{
		ar = (char*)malloc(size * sizeof(char));
		for (i = 0; i < size; i++)
		{
			*(ar + i) = c;
		}
		return (ar);
		free(ar);
	}
	return (NULL);
}
