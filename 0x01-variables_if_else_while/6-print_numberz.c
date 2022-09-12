#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Write a program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: Return 0
 */
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
printf("\n");
return (0);
}
