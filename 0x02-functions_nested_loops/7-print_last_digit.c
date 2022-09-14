#include "main.h"
/**
 * print_last_digit - prrints last digit
 *
 * @i: argument
 * Return: Always 0
 */
int print_last_digit(int i)
{
int ln = i % 10;
if (ln < 0)
ln *= -1;
_putchar(ln + '0');
return (ln);
}
