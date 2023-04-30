#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - Returns the sum of listint_t linked list.
 * @head: the pointer to the head of the linked list.
 *
 * Return: Sum of all the data (n) of the listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int sm = 0;

	while (head != NULL)
	{
		sm += head->n;
		head = head->next;
	}
	return (sm);
}
