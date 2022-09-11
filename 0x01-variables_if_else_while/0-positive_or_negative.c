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
  
  n = rand() - RAND_MAX / 2;
  
  if (n > 0){
    printf("%c, is positive\n", &n)
      }else if(n == 0) {
    printf("%c, is zero\n", &n)
    else{
      printf("%c is negative\n", &n)
  }
  return (0);
  
}