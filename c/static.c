#include<stdio.h>

int add(int);

int main(){
  int sum;

  sum = add(10);
  printf("sum => %d\n", sum);

  sum = add(100);
  printf("sum => %d\n", sum);

  sum = add(9293);
  printf("sum => %d\n", sum);

  return 0;
}

int add(int n){
  static int plus = 0;

  plus += n;

  return plus;
}
