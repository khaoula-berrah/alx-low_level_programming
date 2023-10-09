#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int i;
	int len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		char tmp = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
