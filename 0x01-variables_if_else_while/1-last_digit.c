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
	int lg;
	char str[] = "Last digit of";

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	lg = n % 10;

	if (lg > 5)
	{
		printf("%s %d is %d and is greater than 5\n", str, n, lg);
	}
	else if (lg == 0)
	{
		printf("%s %d is %d and is 0\n", str, n, lg);
	}
	else
	{
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, lg);
	}
	return (0);
}
