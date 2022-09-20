#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - function to print value
 *
 * @n: pointer
 * description: the pointer updates value
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	n = &a;
	*n = 98;
	return (0);
}

