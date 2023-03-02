#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

#define MAX_BUF 1024

/**
 * lq_textlen - Attempts to retrieve the index for the end of the file
 *
 * @filename: Name of the file
 *
 * Return: Index for the end of the file
 */
int lq_textlen(char *filename)
{
	int bytes, fd;
	unsigned int count;
	char c;

	count = -1;
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	do {
		bytes = read(fd, &c, sizeof(c));
		if (bytes == -1 || bytes != sizeof(c))
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			exit(98);
		}
		count++;
	} while (bytes > 0);

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (count);
}

/**
 * read_from - Reads a specified number of bytes using fd passed
 *
 * @fd: File descriptor associated with the file to read from
 * @buf: Buffer to write bytes read from fd
 * @length: Number of bytes to read
 * @filename: Nmae of the file fd is associated with
 *
 * Return: Number of bytes read
 */
int read_from(int fd, char *buf, int length, char *filename)
{
	int count;

	count = 0;
	if (length < MAX_BUF)
	{
		count = read(fd, buf, length);
		if (count < 0 || count != length)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			free(buf);
			exit(98);
		}
	} else
	{
		count = read(fd, buf, MAX_BUF);
		if (count == -1 || count != MAX_BUF)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			free(buf);
			exit(98);
		}
	}
	return (count);
}

/**
 * write_to - Writes a specified number of bytes using the fd passed
 *
 * @fd: File descriptor associated with the file to write to
 * @buf: Buffer to read bytes from to write to fd
 * @length: Number of bytes to write
 * @filename: Nmae of the file fd is associated with
 *
 * Return: Number of bytes wrtiien
 */
int write_to(int fd, char *buf, int length, char *filename)
{
	int count;

	count = 0;
	if (length < MAX_BUF)
		count = write(fd, buf, length);
	else
		count = write(fd, buf, MAX_BUF);
	if (count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		free(buf);
		exit(99);
	}
	return (count);
}

/**
 * main - Entry Point
 *
 * @argc: Argument counter
 * @argv: String list comprising of arguments
 *
 * Return: 0 on success and -1 on failure
 */
int main(int argc, char **argv)
{
	int file_from, file_to, count;
	unsigned int size;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	size = lq_textlen(argv[1]), count = 0;
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IWGRP | S_IROTH);
	buf = malloc(sizeof(*buf) * MAX_BUF);
	if (buf == (void *) 0)
		return (-1);
	while (size > 0)
	{
		count = read_from(file_from, buf, size, argv[1]);
		count = write_to(file_to, buf, size, argv[2]);
		size -= count;
	}
	free(buf);
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	} else if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

