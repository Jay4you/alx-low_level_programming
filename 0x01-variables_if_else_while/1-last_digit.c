#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - mainfunc
*
* Description: boolean code for last digit of arg
* Return: Always return 0 Success
*/

int main(void)
{
	int n;
	int findld;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	findld = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", &n, &findld);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", &n, &findld);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", &n, &findld);
	}
	return (0);
}
