#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * lq_strlen - Retrieves the length of the argument string
 *
 * @text: Argument string
 *
 * Return: Length of text
 */
int lq_strlen(char *text)
{
	if (text == (void *) 0 || text[0] == '\0')
		return (0);
	return (1 + lq_strlen(&text[1]));
}

/**
 * create_file - Creates a file, writes the argument string to it if provided
 *
 * @filename: Name to give the file to create
 * @text_content: Argument string to write to the newly created file
 *
 * Return: 1 if successful and -1 if it failed.
 */
int create_file(const char *filename, char *text_content)
{
	int file, size, w;

	size = lq_strlen(text_content);
	if (filename == (void *) 0)
		return (-1);
	file = open(filename,
			(O_CREAT | O_RDWR | O_TRUNC), (S_IRUSR & S_IWUSR));
	if (file == -1)
		return (-1);
	if (size > 0)
	{
		w = write(file, text_content, size);
	}
	close(file);
	return ((w != -1 && w == size) ? 1 : -1);
}
