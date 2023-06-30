#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node to the beginning of the lists
 * @head: double pointer to head of list
 * @str: string to add to list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head == NULL)
		return (NULL);
	else if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
