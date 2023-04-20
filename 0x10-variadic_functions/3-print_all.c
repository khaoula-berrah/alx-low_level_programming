#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list arrgs;
	int i = 0;
	char *m = "";
	char *s;

	va_start(arrgs, format);

	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", m, va_arg(arrgs, int));
					break;
				case 'i':
					printf("%s%d", m, va_arg(arrgs, int));
					break;
				case 'f':
					printf("%s%f", m, va_arg(arrgs, double));
					break;
				case 's':
					s = va_arg(arrgs, char *);
					if (s == NULL)
						s = "(nil)";
					else
						printf("%s%s", m, s);
					break;
				default:
					i++;
					continue;
			}
			m = ", ";
			i++;
		}
	}
	va_end(arrgs);
	printf("\n");
}
