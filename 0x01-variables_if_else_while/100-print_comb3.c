#include <stdio.h>
/**
 *
 * main - entry point 
 * Description: Write a program that prints all
 * the numbers in 2 digits 
 * Return: Return 0
 */ 
int main(void)
{ int i;
 for (i = '10'; i <= '99'; i++)
{
putchar(i);
}
putchar(',');
putchar(' ');
return (0);
}
