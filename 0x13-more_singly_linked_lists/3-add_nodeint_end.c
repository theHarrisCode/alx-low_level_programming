#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node to end of list
 * @head: double pointer list
 * @n: value to add to list
 * Return: address of new element or NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *temp;

	last = malloc(sizeof(listint_t));
	if (last == NULL)
		return (NULL);
	last->n = n;
	last->next = NULL;
	temp = *head;
	if (*head ==  NULL)
		*head = last;
	else
	{
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = last;
	}
	return (last);
}
