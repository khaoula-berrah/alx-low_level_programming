#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 * Return: Always 0.
 */
int main(void)
{
	int a;
	unsigned long l = 0, g = 1, sm;

	for (a = 0; a < 50; a++)
	{
		sm = l + g;
		printf("%lu", sm);

		l = g;
		g = sm;

		if (a == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
