#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: source file
 * @letters: number of letters to read & print
 * Return: bytes read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bread;
	char *buffer = malloc(sizeof(char *) * letters);

	if (filename == NULL)
		return (0);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bread = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, bread);
	free(buffer);
	close(fd);
	return (bread);
}
