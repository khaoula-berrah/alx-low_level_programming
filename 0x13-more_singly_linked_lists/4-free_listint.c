#include "lists.h"
#include <stddef.h>

/**
 * free_listint - the frees a listint_t list.
 * @head: the pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *curent;

	while (head)
	{
		curent = head;
		head = head->next;
		free(curent);
	}
}
