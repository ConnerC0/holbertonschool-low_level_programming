#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds arguments together
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, n, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
		n += atoi(argv[i]);
	printf("%d\n", n);
	return (0);
}

