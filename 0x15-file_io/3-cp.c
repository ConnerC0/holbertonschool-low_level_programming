#include "main.h"

/**
 * main - main function
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
 * copy_file - program that copies the content of a file to another file
 * @src: copy sorce
 * @dest: copy destination
 * Return: void
 */
void copy_file(const char *src, const char *dest)
{
	int sfd, dfd, bread;
	char buffer[1024];

	sfd = open(src, O_RDONLY);
	if (!src || sfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	dfd = open(dest, O_CREAT | O_WRONLY | O_TRUC, 0664);
	while ((bread = read(sfd, buffer, 1024)) > 0)
	{
		if (write(dfd, buffer, bread) != bread || dfd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}
	if (bread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (close(sfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", sfd);
		exit(100);
	}
	if (close(dfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dfd);
		exit(100);
	}
}

