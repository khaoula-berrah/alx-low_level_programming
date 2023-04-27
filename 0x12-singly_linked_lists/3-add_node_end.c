#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - for adds a new node specifier at the end of a list_t list.
 * @head: the pointer to the head of the list.
 * @str: the string to be duplicated and added to the new node.
 *
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_noode;
	list_t *temmp = *head;
	unsigned int lenn = 0;


	/******* the allocate memory for the new noode *******/
	while (str[lenn])
		lenn++;

	new_noode = malloc(sizeof(list_t));
	if (new_noode == NULL)
		return (NULL);
	/****** the duplicate specifier the string ******/
	new_noode->str = strdup(str);
	new_noode->len = lenn;
	if (new_noode->str == NULL)
	{
		free(new_noode);
		return (NULL);
	}
	/****** set the new node's next pointer to NULL *****/
	new_noode->next = NULL;
	/****** if the list is empty the new node becomes the head *****/
	if (*head == NULL)
	{
		*head = new_noode;
		return (new_noode);
	}
	while (temmp->next)
		temmp = temmp->next;
	temmp->next = new_noode;
	return (new_noode);


}
