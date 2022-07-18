#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: source file
 * @text_content: text to be put in created file
 * Return: 1 if success -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = creat(filename, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
