#include "main.h"
#include <stdio.h>

/**
 *_isupper - main entry point function
 *Description : checks if c is uppercase
 *@c: arg
 *Return: 0
 */

int _isupper(int c)
{
	while (c >= 'A' || c <= 'Z')
	{
		return (1);
	}
	return (0);
}
