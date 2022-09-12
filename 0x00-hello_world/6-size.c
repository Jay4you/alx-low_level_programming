#include<stdio.h>

/**
 * main - display data sizes
 *
 * Description: the main funtion
 * writes a program the prints the size of data type
 * Return: return 0
 */
int main(void)
{
long l;
double db;
float f;
printf("Size of a long int: %c byte(s)\n", sizeof(l));
printf("Size of a long long int: %c byte(s)\n", sizeof(db));
printf("Size of a float: %c byte(s)\n", sizeof(f));
return (0);
}
