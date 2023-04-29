#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - the prints all the elements specifier of a listint_t list.
 * @h: pointer to the head specifier of the list.
 *
 * Return: the number specifier of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
