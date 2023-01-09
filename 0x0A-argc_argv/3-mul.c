#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Description : Program that prints its name
 * @argc: argument
 * @argv: agm
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[argc - 2]) * atoi(argv[argc - 1]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
