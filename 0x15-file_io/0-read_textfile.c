#include "main.h"
#include <unistd.h>
#include <fcntl.h>

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
	unsigned int count;
	char buf[letters];

	if (filename == (void *) 0)
		return (0);
	fd = open(filename, O_RDONLY);
	count = read(fd, buf, letters);
	if (count != -1)
	{
		count = write(STDOUT_FILENO, buf, sizeof(buf));
	}
	close(fd);
	return (count >= 0 ? count : 0);
}

