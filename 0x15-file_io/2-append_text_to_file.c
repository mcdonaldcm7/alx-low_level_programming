#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * lq_strlen - Retrieves the length of a string
 *
 * @s: Input string
 *
 * Return: Length of s
 */
int lq_strlen(char *s)
{
	if (s == (void *) 0 || s[0] == '\0')
		return (0);
	return (1 + lq_strlen(&s[1]));
}

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: The name of the file
 * @text_content: Null terminated string to append to the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, s;

	w = 0;
	if (filename == (void *) 0)
		return (-1);
	s = lq_strlen(text_content);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (s > 0)
	{
		w = write(fd, text_content, s);
	}
	close(fd);
	return ((w != -1 && w == s) ? 1 : -1);
}
