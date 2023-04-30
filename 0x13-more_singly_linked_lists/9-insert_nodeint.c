#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - the inserts a new node at a given position.
 * @head: the pointer to the head of the list.
 * @idx: the index of the list where the new node should be added.
 * @n: data for the new node.
 *
 * Return: the pointer to the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_noode, *prev_noode = NULL, *current_noode = *head;
	unsigned int i = 0;

	if (idx == 0)
		return (add_nodeint(head, n));

	while (current_noode != NULL && i < idx)
	{
		prev_noode = current_noode;
		current_noode = current_noode->next;
		i++;
	}
	if (i != idx)
		return (NULL);

	new_noode = malloc(sizeof(listint_t));
	if (new_noode == NULL)
		return (NULL);

	new_noode->n = n;
	new_noode->next = current_noode;
	prev_noode->next = new_noode;

	return (new_noode);
}
