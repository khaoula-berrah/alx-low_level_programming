#include "lists.h"
/**
 * list_len - Returns number of elements in a linked list_t list.
 * @h: the pointer to the head of list.
 *
 * Return: The number of elements in list.
 */
size_t list_len(const list_t *h)
{
	size_t lenn = 0;

	while (h != NULL)
	{
		lenn++;
		h = h->next;
	}
	return (lenn);
}
