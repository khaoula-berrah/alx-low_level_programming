#include "main.h"
#include <stdio.h>
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	char *length = s;

	while (*length != '\0')
	{
		length++;
	}
	length--;

	while (length >= s)
	{
		printf("%c", *length);
		length--;
	}
	printf("\n");
}
