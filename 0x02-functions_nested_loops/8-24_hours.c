#include "main.h"
/**
 * jack_bauer - print the average day of this agent
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
int hrs;
int hrs_rem;
int min;
int min_rem;
while (hrs <= 23)
{
while (min <= 56)
{
min_rem = min % 10;
hrs_rem = hrs % 10;
_putchar(hrs / 10 + '0');
_putchar(hrs_rem + '0');
_putchar(':');
_putchar(min / 10 + '0');
_putchar(min_rem + '0');
min++;
_putchar('\n');
}
hrs++;
min = 0;
}
}
