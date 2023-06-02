#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string to be manipulated
 * Return: new @str
 */
char *cap_string(char *str)
{
	int i, j;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		       || str[i] == ',' || str[i] == ';' || str[i] == '.'
		       || str[i] == '!' || str[i] == '?' || str[i] == '"'
		       || str[i] == '(' || str[i] == ')' ||  str[i] == '}'
		       || str[i] == '{')
			for (j = 'a'; j <= 'z'; j++)
			{
				if (*(str + (i + 1)) == j)
				{
					*(str + (i + 1)) -= 32;
				}
			}
		i++;
	}
	return (str);
}
