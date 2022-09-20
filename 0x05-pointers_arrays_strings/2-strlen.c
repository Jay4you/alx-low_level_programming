#include "main.h"
/**
 * _strlen - function entry
 * Description: returns str length
 * @s: parameter
 * Return: return length
 */
int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
i++;
return (i);
}
