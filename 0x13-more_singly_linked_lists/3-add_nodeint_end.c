#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to the head of the list
 * @n: integer to store in the new node
 *
 * Return: address of the new element, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_noode, *curent;

	if (head == NULL)
		return (NULL);
	new_noode = malloc(sizeof(listint_t));
	if (new_noode == NULL)
		return (NULL);
	new_noode->n = n;
	new_noode->next = NULL;

	if (*head == NULL)
	{
		*head = new_noode;
		return (new_noode);
	}
	curent = *head;
	while (curent->next != NULL)
		curent = curent->next;
	curent->next = new_noode;

	return (new_noode);
}
