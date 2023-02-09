#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int lq_textlen(int fd)
{
	int bytes, count;
	char c;

	count = 0;
	while ((bytes = read(fd, &c, sizeof(c))) > 0)
	{
		count++;
	}
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
	int fd, count, size;
	unsigned int w;
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

	size = lq_textlen(fd);
	count = read(fd, buf, (size > letters) letters ? size);

	if (count != -1)
	{
		w = write(tes, buf, count);
	}
	close(fd);
	free(buf);
	return ((count >= 0 && w == letters) ? count : 0);
}

