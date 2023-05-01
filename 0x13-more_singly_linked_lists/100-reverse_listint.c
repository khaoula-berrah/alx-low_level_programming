#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - Reverses a listint_t linked list.
 *
 * @head: Pointer to a pointer to the first node of the list.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *preev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	preev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = preev;
		preev = *head;
		*head = next;
	}
	(*head) = preev;

	return (*head);
}
