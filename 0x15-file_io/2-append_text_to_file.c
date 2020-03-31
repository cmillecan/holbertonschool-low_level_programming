#include "holberton.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file
 * @text_content: content
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, writenum;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (i = 0; text_content[i] != '\0'; i++)
	{
	}

	writenum = write(fd, text_content, i);

	if (writenum == -1)
		return (-1);

	close(fd);

	return (1);
}
