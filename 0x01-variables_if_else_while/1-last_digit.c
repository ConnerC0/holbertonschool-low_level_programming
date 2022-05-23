#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - betty style doc for function main goes there
 *
 * Return: Always 0
 */
int main(void)
{
		int n, Last;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		Last = n % 10;
		if (Last > 5 && Last != 0)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, Last);
		}
		else if (Last < 6 && Last != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last);
		}
		else
		{
			printf("Last digit of %d is %d and is 0\n", n, Last);
		}
		return (0);
}
