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
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	return (1);
}
