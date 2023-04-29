#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint2 - the Frees a listint_t list and sets the head to NULL.
 * @head: the Pointer to a pointer to the head node of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *curent;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		curent = *head;
		*head = curent->next;
		free(curent);
	}
}
