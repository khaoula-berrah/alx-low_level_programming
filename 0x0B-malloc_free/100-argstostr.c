#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * argstostr - main entry
  * @ac: int input
  * @av: double pointer array
  * Return: 0
  */

char *argstostr(int ac, char **av)
{
	int i, b, lent = 0, total_lent = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		lent = strlen(av[i]);
		total_lent += lent + 1;
	}

	str = malloc(sizeof(char) * total_lent);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0, b = 0; i < ac; i++)
	{
		lent = strlen(av[i]);
		strcpy(str + b, av[i]);
		b += lent;
		str[b++] = '\n';
	}
	str[b] = '\0';
	return (str);
}
