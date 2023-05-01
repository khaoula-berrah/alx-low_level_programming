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
	listint_t *new_noode, *prev_noode;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new_noode = malloc(sizeof(*new_noode));
	if (new_noode == NULL)
		return (NULL);
	new_noode->n = n;

	if (idx == 0)
	{
		new_noode->next = *head;
		*head = new_noode;
		return (new_noode);
	}
	prev_noode = *head;
	for (i = 0; i < idx - 1 && prev_noode != NULL; i++)
		prev_noode = prev_noode->next;

	if (prev_noode == NULL)
	{
		free(new_noode);
		return (NULL);
	}

	new_noode->next = prev_noode->next;
	prev_noode->next = new_noode;

	return (new_noode);
}
