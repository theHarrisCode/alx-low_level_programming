#include "main.h"
/**
 * _strlen_recursion - returns the length of a string using recursion
 * @s: string to be used
 * Return: @size of @s
 */
int _strlen_recursion(char *s)
{
	int size;

	size = 0;
	if (*(s + size) == '\0')
	{
		return (size);
	}
	else
	{
		size++;
		size += _strlen_recursion(s + 1);
	}
	return (size);
}
