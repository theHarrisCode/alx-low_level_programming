#include "main.h"
/**
 * rev_string - reverses string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}
