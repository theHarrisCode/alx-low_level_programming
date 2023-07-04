#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_listint - frees a list
 * @head: list to free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while((temp = head) != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
