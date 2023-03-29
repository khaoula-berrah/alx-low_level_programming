#include "main.h"
#include <ctype.h>
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] != '\0' && islower(str[i]))
	{
		str[i] = toupper(str[i]);
	}

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
				str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
				str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
				str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
				str[i - 1] == '}' || str[i - 1] == '-')
		{
			 if (islower(str[i]))
			 {
				 str[i] = toupper(str[i]);
			 }
		}
	}
	return (str);
}
