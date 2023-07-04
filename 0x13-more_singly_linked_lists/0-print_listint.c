#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t
 * @h: list to be manipulated/printed
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t  count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
