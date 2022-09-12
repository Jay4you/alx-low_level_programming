#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - use the main funtion to generate data
 *
 *Description: this program will assign a number to the varriable n
 *Return: return 0
 */

int main(void)
  
{
int n;
srand(time(0));  
n = rand() - RAND_MAX / 2
if (n > 0){
printf("is positive\n");
}else if(n == 0) {
printf("is zero\n");
}else{
printf("is negative\n");
}
  return (0);
}
