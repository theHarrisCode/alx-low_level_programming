#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints out linked list
 * @h: pointer to the head of the linked list
 * Return: Size of the list
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h; /*remember to keep this const b/c of type */
	size_t count = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		count++;
	}
	return (count);
}
