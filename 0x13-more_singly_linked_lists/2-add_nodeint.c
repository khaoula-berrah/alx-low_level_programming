#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node specifier listint_t list.
 * @head: the Pointer to a pointer to the first node of the list.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_noode;

	new_noode = malloc(sizeof(listint_t));
	if (new_noode == NULL)
		return (NULL);
	new_noode->n = n;
	new_noode->next = *head;
	*head = new_noode;

	return (new_noode);
}
