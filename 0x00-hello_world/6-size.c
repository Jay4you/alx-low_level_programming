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
char c;
int i;
long l;
double db;
float f;
 
 printf("A char is: %cs byte(s)\n", sizeof(c));
 printf("An int is : %cs byte(s)\n", sizeof(i));
 printf("A long is: %cs byte(s)\n" sizeof(l));
 printf("A double is: %cs byte(s)\n", sizeof(db));
 printf("A float is: %cs byte(s)\n", sizeof(f));
       return (0);
}
