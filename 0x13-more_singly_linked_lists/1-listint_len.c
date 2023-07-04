#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: list to be manipulated
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
