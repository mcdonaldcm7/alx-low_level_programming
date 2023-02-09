#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * lq_textlen - Attempts to retrieve the index for the end of the file
 *
 * @filename: Name of the file
 *
 * Return: Index for the end of the file
 */
unsigned int lq_textlen(const char *filename)
{
	int bytes, fd;
	unsigned int count;
	char c;

	count = 0;
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (-1);
	while ((bytes = read(fd, &c, sizeof(c))) > 0)
	{
		count++;
	}
	close(fd);
	return (count);
}

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 *
 * @filename: Name of text file
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 */
unsigned int read_textfile(const char *filename, unsigned int letters)
{
	int fd, count;
	unsigned int w, size;
	char *buf;

	if (filename == (void *) 0)
		return (0);
	buf = malloc(sizeof(*buf) * letters);
	if (buf == (void *) 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	size = lq_textlen(filename);
	size = size >= letters ? letters : size;
	count = read(fd, buf, size);

	if (count != -1)
	{
		w = write(STDOUT_FILENO, buf, size);
	}
	close(fd);
	free(buf);
	return ((count >= 0 && w == size) ? count : 0);
}

