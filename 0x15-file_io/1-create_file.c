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
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	/* fd = creat(filename, mode); */
	/* creat() is the same as open(O_CREAT | O_WRONLY | O_TRUNC) */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
