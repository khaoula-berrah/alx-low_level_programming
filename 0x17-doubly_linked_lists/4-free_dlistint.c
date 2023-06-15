#include "lists.h"

/**
 * free_dlistint - function that frees a doubly linked list.
 * @head: pointer to the head of the doubly linked list.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *prev, *current;

	if (!head)
		return;

	current = head;
	while (current->next)
	{
		prev = current;
		current = current->next;
		free(prev);
	}
	free(current);
}
