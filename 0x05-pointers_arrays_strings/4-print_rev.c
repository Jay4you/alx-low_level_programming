#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * print_rev - print str in reverse
 *
 * @s: arg
 * Description: print in reverse order
 * Return: Nothing
 */
void print_rev(char *s)
{
int i = strlen(s);

while (i--)
putchar(*(s + i));
putchar(10);
}
