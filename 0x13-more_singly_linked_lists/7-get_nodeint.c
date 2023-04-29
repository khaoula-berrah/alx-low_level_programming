#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the node specifier listint_t linked list.
 * @head: the pointer to head of linked list.
 * @index: the index of node to be returned.
 *
 * Return: the pointer to nth node, or NULL if node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curent = head;
	unsigned int i;

	for (i = 0; curent != NULL && i < index; i++)
		curent = curent->next;

	return (curent != NULL ? curent : NULL);
}
