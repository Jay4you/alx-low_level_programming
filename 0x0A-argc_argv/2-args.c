#include <stdio.h>
/**
* main - function
* Description : Program that prints its namiiiiiiie
* @argc: argument
* @argv: agm
* Return: 0 Always
*
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
