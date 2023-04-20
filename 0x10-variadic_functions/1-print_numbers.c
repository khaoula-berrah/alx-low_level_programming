#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Print numbers, followed by new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: A variable number of number to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numero;
	unsigned int i;

	va_start(numero, n);

	for (i = 0 ; i < n ; i++)
	{
		unsigned int k = va_arg(numero, int);

		printf("%d", k);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numero);
}
