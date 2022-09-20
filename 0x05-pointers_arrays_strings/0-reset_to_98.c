#include <stdio.h>
#include "main.h"
/**
 * reset_to_98(int *n) : funtion
 *
 * @n: pointer arg
 * Return: Always 0
 */
void reset_to_98(int *n)
{
	int a;
	n = &a;
	*n = 98;
}
