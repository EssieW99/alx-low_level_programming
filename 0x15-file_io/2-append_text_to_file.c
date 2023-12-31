#include "main.h"

/**
 * append_text_to_file - Appends text at the end of the file
 * @filename: Name of file
 * @text_content: String to add at the end of file
 *
 * Return: Is 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_file;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	write_file = write(fd, text_content, strlen(text_content));

	if (write_file == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
