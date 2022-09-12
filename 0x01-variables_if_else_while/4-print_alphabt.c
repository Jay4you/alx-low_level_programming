#include <stdio.h>
/**
 * main - print alphabet in lowercase
 *
 * Description: Write a program that prints the alphabet in lowercase
 * Return: Return 0
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i != 'e' && i != 'q')
{
putchar(i);
}
}
printf("\n");
return (0);
