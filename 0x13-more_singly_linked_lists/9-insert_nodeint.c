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
	listint_t *new_noode, *tmp = *head;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	new_noode = malloc(sizeof(listint_t));
	if (!new_noode)
		return (NULL);
	new_noode->n = n;

	if (idx == 0)
	{
		new_noode->next = *head;
		*head = new_noode;
		return (new_noode);
	}
	while (tmp)
	{
		if (i == idx - 1)
		{
			new_noode->next = tmp->next;
			tmp->next = new_noode;
			return (new_noode);
		}
		tmp = tmp->next;
		i++;
	}

	return (new_noode);
	return (NULL);
}
