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
	int i, k, total_lenn = 0, poss = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k]; k++)
		{
			total_lenn++;
		}
	}
	total_lenn += ac;

	str = malloc(sizeof(char) * total_lenn + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k]; k++)
		{
			str[poss] = av[i][k];
			poss++;
		}
		if (str[poss] == '\0')
		{
			str[poss++] = '\n';
		}
	}
	return (str);
}

