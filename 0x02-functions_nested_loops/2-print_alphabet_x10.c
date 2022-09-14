#include "main.h"
/**
 * print_alphabet - print alphabets 10x
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
char i;
for (i = 0; i <= 9; i++)
{
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar(i);
}
}
