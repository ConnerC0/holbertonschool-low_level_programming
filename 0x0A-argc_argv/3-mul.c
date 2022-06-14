#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int x, y, r;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	r = x * y;
	printf("%d\n", r);
	return (0);
}
