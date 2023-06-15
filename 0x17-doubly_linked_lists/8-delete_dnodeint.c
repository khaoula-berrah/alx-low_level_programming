#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node in
 * a specific index.
 * @head: pointer of pointer to the head of the doubly linked list.
 * @index: the position of node that should be deleted.
 * Return: 1 if success, -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *prev = NULL, *next = NULL, *cur = *head;

	if (!head)
		return (-1);
	while (cur)
	{
		if (index == i)
			break;
		cur = cur->next;
		i++;
	}
	if (!cur)
		return (-1);
	next = cur->next;
	prev = cur->prev;
	if (next)
		next->prev = prev;
	if (prev)
		prev->next = next;
	else
	{
		*head = next;
	}
	free(cur);

	return (1);
}
