#include <stdio.h>

/**
 * main - lower and uppercase alphabet
 *
 * Return: return 0
 */

int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (i = 'A'; i <= 'Z'; i++)
{
putchar(i);
}
printf("\n");

return (0);
}
