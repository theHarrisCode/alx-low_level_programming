#include "main.h"
/**
 * _isalpha - checks if @c is a alphabetic character
 * @c: character to be checked
 * Return: 0 (Success) 1 (Fail)
 */
int _isalpha(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
