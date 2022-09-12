#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Write a program that prints the lowercase alphabet in reverse
 * followed by a new line
 * Return: Return 0
 */
int main(void)
{
char i;
for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
printf("\n");
return (0);
}
