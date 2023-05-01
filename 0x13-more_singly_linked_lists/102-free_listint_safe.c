#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint_safe - Frees a listint_t list
 * @h: A pointer to a pointer to the head node of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (count);

	current = *h;
	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);

		if ((void *)next <= (void *)current)
		{
			*h = NULL;
			break;
		}

		current = next;
	}

	return (count);
}
