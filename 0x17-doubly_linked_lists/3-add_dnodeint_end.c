#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a
 * doubly linked list.
 * @head: pointer of pointer to the head of the doubly linked list.
 * @n: data of the new node.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *ptr;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t *));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = node;
	node->prev = ptr;

	return (node);
}
