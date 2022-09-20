#include "main.h"
/**
 * swap_int - function entry
 *
 * Descrioption: swap values between integers
 * @a: parameter
 * @b: parameter
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
int i = *a;
*a = *b;
*b = i;
}
