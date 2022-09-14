#include "main.h"
#include <stdio.h>
/**
 * _abs - function for abs value
 *
 * @i: int argument
 * Return: Always 0
 */
int _abs(int i)
{
if (i > 0 || i == 0)
{
return (i);
}
else
return (i * -1);
}
