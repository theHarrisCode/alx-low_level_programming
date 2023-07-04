#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at beginning of listint_t
 * @head: double pointer list
 * @n: value to be added to list
 * Return: address of the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	if (new == NULL)
		return (NULL);
	return (new);
}
