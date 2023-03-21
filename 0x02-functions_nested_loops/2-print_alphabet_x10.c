#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char k = 'a';
	int b = 0;

	for (b = 0; b <= 10; b++)
	{
		k = 'a';
		while (k <= 'z')
		{
			_putchar(k);
			k++;
		}
		_putchar('\n');
	}
}
