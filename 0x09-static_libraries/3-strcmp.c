#include "main.h"
/**
 * _strcmp - compares twom strings
 * @s1: first string
 * @s2: second string
 * Return: difference of character
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
		return (s1[i] - s2[i]);
	return (0);
}
