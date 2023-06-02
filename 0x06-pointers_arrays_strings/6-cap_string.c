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
/**
 *		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
 *		       || str[i] == ',' || str[i] == ';' || str[i] == '.'
 *		       || str[i] == '!' || str[i] == '?' || str[i] == '"'
 *		       || str[i] == '(' || str[i] == ')' ||  str[i] == '}'
 *		       || str[i] == '{')
 */
		switch (*(str +i))
		{
		case ' ':
			for (j = 'a'; j <= 'z'; j++)
			{
				if (*(str + (i + 1)) == j)
				{
					*(str + (i + 1)) -= 32;
				}
			}
			break;
		case '\t':
			for (j = 'a'; j <= 'z'; j++)
			{
				if (*(str + (i + 1)) == j)
				{
					*(str + (i + 1)) -= 32;
				}
			}
			break;
		case '\n':
			for (j = 'a'; j <= 'z'; j++)
			{
				if (*(str + (i + 1)) == j)
				{
					*(str + (i + 1)) -= 32;
				}
			}
			break;
		case ',':
			for (j = 'a'; j <= 'z'; j++)
			{
				if (*(str + (i + 1)) == j)
				{
					*(str + (i + 1)) -= 32;
				}
			}
			break;
		case ';':
			for (j = 'a'; j <= 'z'; j++)
			{
				if (*(str + (i + 1)) == j)
				{
					*(str + (i + 1)) -= 32;
				}
			}
			break;
		case '.':
			for (j = 'a'; j <= 'z'; j++)
			{
				if (*(str + (i + 1)) == j)
				{
					*(str + (i + 1)) -= 32;
				}
			}
			break;
		case '!':
			for (j = 'a'; j <= 'z'; j++)
			{
				if (*(str + (i + 1)) == j)
				{
					*(str + (i + 1)) -= 32;
				}
			}
			break;
		case '?':
			for (j = 'a'; j <= 'z'; j++)
			{
				if (*(str + (i + 1)) == j)
				{
					*(str + (i + 1)) -= 32;
				}
			}
			break;
		case '"':
			for (j = 'a'; j <= 'z'; j++)
			{
				if (*(str + (i + 1)) == j)
				{
					*(str + (i + 1)) -= 32;
				}
			}
			break;
		case '(':
			for (j = 'a'; j <= 'z'; j++)
			{
				if (*(str + (i + 1)) == j)
				{
					*(str + (i + 1)) -= 32;
				}
			}
			break;
		case ')':
			for (j = 'a'; j <= 'z'; j++)
			{
				if (*(str + (i + 1)) == j)
				{
					*(str + (i + 1)) -= 32;
				}
			}
			break;
		case '{':
			for (j = 'a'; j <= 'z'; j++)
			{
				if (*(str + (i + 1)) == j)
				{
					*(str + (i + 1)) -= 32;
				}
			}
			break;
		case '}':
			for (j = 'a'; j <= 'z'; j++)
			{
				if (*(str + (i + 1)) == j)
				{
					*(str + (i + 1)) -= 32;
				}
			}
			break;
		default:
			break;
		}
		i++;
	}
	return (str);
}
