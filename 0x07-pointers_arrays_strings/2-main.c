#include "main.h"
#include <stdio.h>

int main()
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
		printf("%s\n", f);
	return (0);
}
