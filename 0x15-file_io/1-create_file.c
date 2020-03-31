#include "holberton.h"
#include <stdio.h>

/**
 * create_file - creates a file
 * @filename: file
 * @text_content: content
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, writenum;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len] != '\0'; len++)
	{
	}

	writenum = write(fd, text_content, len);

	if (writenum == -1)
		return (-1);

	close(fd);

	return (1);
}
