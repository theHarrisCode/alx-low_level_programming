#include "main.h"
/**
 * _strstr - function that locates a subtstring
 * @haystack: string to search in
 * @needle: substring to look for
 * Return: pointer to beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; haystack[i]; i++)
		{
			if (*haystack == *needle)
				return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
