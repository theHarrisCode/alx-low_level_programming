#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
/**
 * free_listint - frees a list
 * @head: list to free
 */
void free_listint(listint_t *head)
{
	listt_int *temp;

	while((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
