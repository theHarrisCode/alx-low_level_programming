#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be looked through
 * @c: character to look for
 * Return: pointer to the first occurance @c in @s, null if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
