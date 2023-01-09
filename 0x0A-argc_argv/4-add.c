#include <stdio.h>
#include <stdlib.h>
/**
* main - function
* Description : Program that prints its sm
* @argc: argument
* @argv: agm
* Return: 0 Always
*
*/

int main(int argc, char *argv[])
{
	int i = 1, nNum = 0, sum = 0, j = 0;

	for (j = 1; j < argc; j++)
	{
		if (argc == 1)
		{
			printf("%d\n", nNum);
			return (0);
		}
		else if (atoi(argv[i]) >= 1)
		{
			sum = sum + atoi(argv[i]);
			i++;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
