#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to calculate length for.
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * create_file - Creates a file and writes content to it.
 * @filename: The name of the file to create.
 * @text_content: The content to write into the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	ssize_t bytes_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
		len = _strlen(text_content);

	bytes_written = write(fd, text_content, len);
	close(fd);

	if (bytes_written == -1)
		return (-1);

	return (1);
}

