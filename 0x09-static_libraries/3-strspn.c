#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: cnt
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k, cnt = 0;

	for (i = 0; s[i]; i++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
			{
				cnt++;
				break;
			}
		}
		if (!accept[k])
			break;
	}
	return (cnt);
}
