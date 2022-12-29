#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function entry
 *
 * Description: searches for digits
 * @c: arg
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
