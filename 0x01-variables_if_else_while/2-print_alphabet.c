#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 *main - Entry point
 *Explain: 'putchar alphabets lowercase'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
