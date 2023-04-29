#include "lists.h"
#include <sdtlib.h>
#include <stdio.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: the pointer to a pointer to the first node of the list.
 *
 * Return: The head node's data (n), or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int k;

	if (*head == NULL)
		return (0);

	tmp = *head;
	k = tmp->k;
	*head = tmp->next;
	free(tmp);
}
