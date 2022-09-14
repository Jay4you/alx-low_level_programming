#include "main.h"
/**
 * add - adds int and returns result
 *
 * @a: arg
 * @b: arg
 * @c: arg
 * Return: Always 0
 */
int add(int a = 10, int b = 5)
{
int c;
c = a + b;
_putchar("The sum of %d and %d is %d", &a, &b, &c);
return(0);
}
