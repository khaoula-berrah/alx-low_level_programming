#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
  * string_nconcat - concatenates n bytes of a string to another string
  * @s1: string to append to
  * @s2: string to concatenate from
  * @n: number of bytes from s2 to concatenate to s1
  * Return: pointer to the resulting string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t lenn1, lenn2;
	char *reslt;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	lenn1 = strlen(s1);
	lenn2 = strlen(s2);

	if (n >= lenn2)
	{
		n = lenn2;
	}
	reslt = malloc(lenn1 + n + 1);

	if (reslt == NULL)
	{
		return (NULL);
	}
	memcpy(reslt, s1, lenn1);
	memcpy(reslt + lenn1, s2, n);
		reslt[lenn1 + n] = '\0';
	return (reslt);
}
