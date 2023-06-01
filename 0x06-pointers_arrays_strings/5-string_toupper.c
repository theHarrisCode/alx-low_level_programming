#include "main.h"
/**
 * string_toupper - changes all lowercase to uppercase
 * @str: string to be changed
 * Return: new string
 */
char *string_toupper(char *str)
{
	int i;
	char j;

	i = 0;
	while (*(str + i) != '\0')
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if (*(str + i) == j)
			{
				*(str + i) -=  32;
			}
		}
		i++;
	}
	return (str);
}
