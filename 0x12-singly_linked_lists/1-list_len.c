#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * list_len - length of the list
 * @h: start of the list
 * Return: legnth of the list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
