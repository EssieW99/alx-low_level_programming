#include "main.h"

/**
 * read_textfile - Reads a text file and prints it
 * @filename: Pointer to the string
 * @letters: No. of letters to be read and printed
 *
 * Return: Is 0 or no. of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *ptr;
	char *buffer;
	ssize_t read_file, print_file;

	if (filename == NULL)
	{
		return (0);
	}
	ptr = fopen(filename, "r");

	if (ptr == NULL)
	{
		return (0);
	}
	buffer = (char *)malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(ptr);
		return (0);
	}
	read_file = fread(buffer, 1, letters, ptr);

	if (read_file <= 0)
	{
		fclose(ptr);
		free(buffer);
		return (0);
	}
	buffer[read_file] = '\0';
	print_file = write(STDOUT_FILENO, buffer, read_file);

	fclose(ptr);
	free(buffer);
	if (print_file != read_file)
	{
		return (0);
	}
	return (print_file);
}
