#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - Entry point
  *Explain: 'Show number if negative or possitive'
  *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >= 0)
		printf("%d is positive or equal zero", n);
	else
		printf("%d is negative", n);
	printf("\n")
	return (0);
}
