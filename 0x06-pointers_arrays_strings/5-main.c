#include "main.h"
#include <stdio.h>

int main()
{
	char str[] = "Holberton School!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
