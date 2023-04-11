#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *duplc;

	if (str == NULL)
	{
		return (NULL);
	}

	duplc = malloc(strlen(str) + 1);
	if (duplc != NULL)
	{
		strcpy(duplc, str);
	}
	return (duplc);

}

