#include "lists.h"
#include <stdio.h>
size_t listint_lenn(const listint_t *head);
size_t print_listint_safee(const listint_t *head);

/**
 * print_listint_safee - the prints specifier a listint list.
 * @head: the pointer to the head of the listint_t list.
 * Return: The number specifier of nodes in the list.
 */

size_t print_listint_safee(const listint_t *head)
{
	size_t nod, i = 0;

	nod = listint_lenn(head);
	if (nod == 0)
	{
		for (nod = 0 ; head != NULL ; nod++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	} else
		{
			for (i = 0 ; i < nod ; i++)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
			}
			printf("->[%p] %d\n", (void *)head, head->n);
		}
	return (nod);
	}
/**
 * listint_lenn - the count the number specifier of nodes in a looped.
 * listint_linked list.
 * @head: the pointer specifier to the head of listint_t to check.
 * Return: if the` list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */

size_t listint_lenn(const listint_t *head)
{
	const listint_t *midd, *hh;
	size_t nod = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	midd = head->next;
	hh = (head->next)->next;
	while (hh)
	{
		if (midd == hh)
		{
			midd = head;
			while (midd != hh)
			{
				nod++;
				midd = midd->next;
				hh = hh->next;
			}
			midd = midd->next;
			while (midd != hh)
			{
				nod++;
				midd = midd->next;
			}
			return (nod);
		}
		midd = midd->next;
		hh = (hh->next)->next;
	}

	return (0);
}
