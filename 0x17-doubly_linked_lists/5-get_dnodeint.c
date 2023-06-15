#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of
 * a dlistint_t linked list.
 * @head: pointer to the head of the doubly linked list.
 * @index: the index of the target node that should return.
 * Return: the node of the given index, or NULL if does not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *ptr = head;

	while (ptr)
	{
		if (count == index)
			break;
		ptr = ptr->next;
		count++;
	}
	return (ptr);
}
