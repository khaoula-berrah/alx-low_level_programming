#include <stdlib.h>
#include "lists.h"

/**
 * free_list - the frees a list_t list.
 * @head: the pointer specifier to head of list_t list.
 */
void free_list(list_t *head)
{
	list_t *temmp;

	while (head)
	{
		temmp = head->next;
		free(head->str);
		free(head);
		head = temmp;
	}
}
