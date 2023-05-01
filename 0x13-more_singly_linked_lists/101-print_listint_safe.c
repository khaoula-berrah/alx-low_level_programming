#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - Prints a listint_t linked list.
 *
 * @head: Pointer to the first node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nm = 0;
	long int dif;

	while (head)
	{
		dif = head - head->next;
		nm++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (dif > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (nm);
}
