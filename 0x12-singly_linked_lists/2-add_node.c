#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: the double pointer specifier to the head of the list.
 * @str: the string to be duplicated and stored in the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_noode;
	unsigned int lenn = 0;

	while (str[lenn])
		lenn++;
	new_noode = malloc(sizeof(list_t));
	if (new_noode == NULL)
		return (NULL);
	new_noode->str = strdup(str);
	new_noode->len = lenn;
	new_noode->next = (*head);
	(*head) = new_noode;
	return (*head);
}

