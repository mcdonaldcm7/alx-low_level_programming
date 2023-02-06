#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

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
	int fd;
	int count;
	char *buf;

	if (filename == (void *) 0)
		return (0);
	buf = malloc(sizeof(*buf) * letters);
	if (buf == (void *) 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	count = read(fd, buf, letters);
	if (count != -1)
	{
		count = write(STDOUT_FILENO, buf, letters);
	}
	close(fd);
	free(buf);
	return (count >= 0 ? count : 0);
}

