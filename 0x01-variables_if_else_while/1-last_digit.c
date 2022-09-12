#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
*
* Description: boolean code for last digit of arg
* Return: return 0
*/

int main(void)
{
	int n;
	int findld;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	findld = n % 10;

	if (findld > 5)
	{
		printf("Last digit of %d is %g and is greater than 5\n", &n, &findld);
	}
	else if (findld == 0)
	{
		printf("Last digit of %d is %g and is 0\n", &n, &findld);
	}
	else
	{
		printf("Last digit of %d is %g and is less than 6 and not 0\n", &n, &findld);
	}
	return (0);
}
