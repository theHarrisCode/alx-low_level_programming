#include "main.h"
/**
 * leet - function that encode a string into 1337
 * @str: string to be manipulated
 * Return: @str post-manipulation
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "AaEeOoTtLl";
	char numbers[] = "4433007711";

	i = 0;
	while (*(str + i) != '\0') /* until str[i] reaches null byte*/
	{
		j = 0;
		while (j < 10) /* size of both letters and numbers array*/
		{
			if (*(str + i) == *(letters + j))
				*(str + i) = *(numbers + j);
			j++;
		}
		i++;
	}
	return (str);
}
