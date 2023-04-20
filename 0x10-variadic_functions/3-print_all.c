#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *sttr, *sp = "";

	va_list lst;

	va_start(lst, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(lst, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(lst, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(lst, double));
					break;
				case 's':
					sttr = va_arg(lst, char *);
					if (!sttr)
						sttr = "(nil)";
					printf("%s%s", sp, sttr);
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(lst);
}
