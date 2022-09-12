#include <stdio.h>
/**
 * main - main function to display in lower case
 *
 * Description: Write a program that prints the alphabet in lowercase
 * Return: Return 0
 */

int main(void)

	char low;
{	
	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
		putchar("\n");
	}
	
	return (0);
}

