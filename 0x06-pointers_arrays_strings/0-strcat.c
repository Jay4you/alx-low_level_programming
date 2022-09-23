#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcat - function
 *
 * @dest: arg
 * @src: arg
 * Description: This function concatenates two strings
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
//get the length of dest first
int i = 0, len = 0;
while (dest[i++])
len++;
for (i = 0; src[i]; i++)
dest[len++] = src[i];
return (dest);
}
