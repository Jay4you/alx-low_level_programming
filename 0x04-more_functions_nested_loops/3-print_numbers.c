#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function
 *
 * Description: prints numbers from 0 to 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		char j;

		j = '0';
		_putchar(j);
		_putchar("/n");
		j++;
		i++;
	}
}
