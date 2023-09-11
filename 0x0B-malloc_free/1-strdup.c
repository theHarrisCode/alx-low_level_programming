#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns pointer to a newly allocated space of duplicate string
 * @str: pointer string to be copied
 * Return: new copied string that was allocated in memory
 */
char *_strdup(char *str)
{
	int i, j;
	char *ar;

	if (str ==  NULL)
		return (NULL);
	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	ar = malloc((i + 1) * sizeof(char));
	j = 0;
	while (*(str + j) != '\0')
	{
		*(ar + j) = *(str + j);
		j++;
	}
	if (ar)
	{
		return (ar);
		free(ar);
	}
	return (NULL);
}
