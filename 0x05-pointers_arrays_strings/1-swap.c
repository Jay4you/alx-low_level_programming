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
*a = &b;
*b = &a;
}
