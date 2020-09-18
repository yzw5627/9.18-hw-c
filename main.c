// Author: Yue Wu yzw5627@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h> 

int sum = 0;
int digit_sum(int n) {
  if(n>0)
  {
  sum = sum + n%10;
  digit_sum(n/10);
  }
  return sum;
}

int main(void) {
  char *num = readline("Enter an int: ");
  int calSum = atoi(num);
  printf("sum of digits of %d is %d.\n", calSum, digit_sum(calSum));

  return 0;
}