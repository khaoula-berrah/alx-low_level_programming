#include "lists.h"

/**
 * find_listint_loop - the write function find the loop in a linked list.
 * @head: input function.
 * Return: addition of the node where the loop start.
 * or NULL if there is no loop function.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *h11, *h22;

	if (head == NULL || head->next == NULL)
		return (NULL);
	h11 = head->next;
	h22 = head->next->next;

	while (h22)
	{
		if (h11 == h22)
		{
			h11 = head;
			while (h11 != h22)
			{
				h11 = h11->next;
				h22 = h22->next;
			}
			return (h11);
		}
		h11 = h11->next;
		h22 = h22->next->next;
	}
	return (NULL);
}
