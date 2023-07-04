#include "lists.h"
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
