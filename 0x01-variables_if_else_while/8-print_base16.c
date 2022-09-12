#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Write a program that prints all the numbers of base 16
 * in lowercase
 * Return: Return 0
 */
int main(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
printf("\n");
return (0);
}
