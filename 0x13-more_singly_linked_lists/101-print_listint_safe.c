#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * loopeed_listint - write func that count the num of unique nodes
 * @head: input
 * Return: num of unique nodes, otherwise 0
 */

size_t loopeed_listint(const listint_t *head)
{
	const listint_t *h11, *h22;
	size_t nodee = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	h11 = head->next;
	h22 = head->next->next;

	while (h22)
	{
		if (h11 == h22)
		{
			h11 = head;
			while (h11 != h22)
			{
				nodee++;
				h11 = h11->next;
				h22 = h22->next;
			}
			h11 = h11->next;
			while (h11 != h22)
			{
				nodee++;
				h11 = h11->next;
			}
			return (nodee);
		}
		h11 = h11->next;
		h22 = h22->next->next;
	}
	return (0);
}


/**
 * print_listint_safe - the write function print a listint_t linked list.
 * @head: input functions.
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0, nodee = loopeed_listint(head);

	if (nodee == 0)
	{
		for (; head != NULL; nodee++)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (; n < nodee; n++)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *) head, head->n);
	}
	return (nodee);
}
