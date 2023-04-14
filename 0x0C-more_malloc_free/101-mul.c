#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
  * multiply - checks if a string contains a non-digit char
  * @s: string to be evaluated
  * Return: 0 if a non-digit is found, 1 otherwise
  */
int multiply(char *s)
{
	int m = 0;

	while (s[m])
	{
		if (s[m] < '0' || s[m] > '9')
			return (0);
		m++;
	}
	return (1);
}
/**
  * _strlen - returns the length of a string
  * @s: string to evaluate
  * Return: the length of the string
  */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
  * error - handles errors for main
  */
void error(void)
{
	printf("Error\n");
	exit(98);
}
/**
  * main - multiplies two positive numbers
  * @argc: number of arguments
  * @argv: array of arguments
  * Return: always 0 (Success)
  */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int ll1, ll2, ll, i, *reslt, crry, dd1, dd2, j = 0;

	num1 = argv[1], num2 = argv[2];
	if (argc != 3 || !multiply(num1) || !multiply(num2))
		error();

	ll1 = _strlen(num1);
	ll2 = _strlen(num2);
	ll = ll1 + ll2 + 1;
	reslt = malloc(sizeof(int) * ll);
	if (!reslt)
		return (1);
	for (i = 0; i <= ll1 + ll2; i++)
		reslt[i] = 0;
	for (ll1 = ll1 - 1; ll1 >= 0; ll1--)
	{
		dd1 = num1[ll1] - '0';
		crry = 0;
		for (ll2 = _strlen(num2) - 1; ll2 >= 0; ll2--)
		{
			dd2 = num2[ll2] - '0';
			crry += reslt[ll1 + ll2 + 1] + (dd1 * dd2);
			reslt[ll1 + ll2 + 1] = crry % 10;
			crry /= 10;
		}
		if (crry > 0)
			reslt[ll1 + ll2 + 1] += crry;
	}
	for (i = 0; i < ll - 1; i++)
	{
		if (reslt[i])
			j = 1;
		if (j)
			_putchar(reslt[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(reslt);
	return (0);
}
