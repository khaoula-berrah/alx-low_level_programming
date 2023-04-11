#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *reslt;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	reslt = (char *) malloc(strlen(s1) + strlen(s2) + 1);

	if (reslt == NULL)
	{
		return (NULL);
	}

	strcpy(reslt, s1);
	strcat(reslt, s2);

	return (reslt);
}
