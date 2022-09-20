#include <stdio.h>
#include "main.h"
/**
 * _puts - function
 *
 * @str: parameter
 * Description: prints string
 * Return: returns 0
 */
void _puts(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
putchar(*(str + i));
i++;
}
putchar(10);
}
