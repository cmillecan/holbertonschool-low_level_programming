#include "holberton.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: file
 * @letters: letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int r_count, w_count;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	r_count = read(fd, buffer, letters);
	if (r_count == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	w_count = write(STDOUT_FILENO, buffer, r_count);
	if (w_count == -1)
		return (0);

	if (r_count != w_count)
		return (0);

	free(buffer);
	close(fd);

	return (w_count);
}
