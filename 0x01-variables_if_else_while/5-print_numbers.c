#include <stdio.h>
/**
 * main - code func
 *
 * Description: Write a program that prints all single digit numbers of base 10
 *  starting from 0
 *  Return: Return 0
 */
int main(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
printf("\n");
return (0);
}
