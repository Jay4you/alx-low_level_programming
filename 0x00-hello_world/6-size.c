#include <stdio.h>
/**
 * main - display data sizes
 *
 * Description: the main funtion
 * writes a program the prints the size of data type
 * Return: return 0
 */
int main (void)
{
char c;
int i;
long l;
long long ll;
small s;
float f;
printf("A char is: %cls byte(s)\n", sizeof(c);
printf("An int is : %cls byte(s)\n", sizeof(i);
printf("A long is: %cls byte(s)\n" sizeof(l);
printf("A long long is: %cls byte(s)\n", sizeof(ll);
printf("A small is: %cls byte(s)\n" sizeof(s);
printf("A float is: %cls byte(s)\n", sizeof(f);
       return (0);
}
