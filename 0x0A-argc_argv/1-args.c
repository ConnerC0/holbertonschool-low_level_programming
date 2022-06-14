#include <stdio.h>
/**
 * main - prints number of arguments passed into it.
 * @argc: argument counter
 * @argv: argument string
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
