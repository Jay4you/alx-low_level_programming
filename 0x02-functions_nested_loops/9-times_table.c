#include "main.h"
/**
 * times_table - function for times table
 *
 * Return: Always 0
 */
void times_table(void)
{
int digit, multi, result;
for (digit = 0; digit <= 9; digit++)
{
_putchar('0');
for (multi = 1; multi <= 9; multi++)
_putchar(',');
_putchar(' ');
result = digit * multi;
if (result <= 9)
_putchar(' ');
else
_putchar((result % 10) + '0');
}
_putchar('\n');
}
