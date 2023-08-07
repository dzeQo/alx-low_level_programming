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
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Name of the file.
 * @text_content: String to append at the end of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t bytes_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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

