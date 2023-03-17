#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'prints the alphabet in lowercase and uppercase'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;
	int k = 65;

	while (n <= 122)
		putchar(n);
	while (k <= 90)
		putchar(k);
	putchar('\n');

	return (0);
}
