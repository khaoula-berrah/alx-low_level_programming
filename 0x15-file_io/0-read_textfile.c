#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t n;
	ssize_t m;

	if (filename == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	n = fread(buffer, sizeof(char), letters, file);
	if (n < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	m = write(STDOUT_FILENO, buffer, n);
	if (m < 0 || m != n)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);
	free(buffer);
	return (n);
}
