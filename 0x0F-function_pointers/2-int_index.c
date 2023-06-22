#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches an integer
 * @array: array to be checked
 * @size: size of the array
 * @cmp: pointer to a function
 * Return: @i if element found, -1 if fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
