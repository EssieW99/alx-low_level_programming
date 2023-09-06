#include "main.h"

/**
 * create_file - Creates a file
 *
 * @filename: Name of the file
 * @text_content: String to write to the file
 *
 * Return: Is 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_file;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		write_file = write(fd, text_content, strlen(text_content));

		if (write_file == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
