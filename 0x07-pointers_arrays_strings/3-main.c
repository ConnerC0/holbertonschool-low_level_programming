#include "main.h"
#include <stdio.h>

int main()
{
	char *s = "hello, world";
	char *f = "oleh";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
