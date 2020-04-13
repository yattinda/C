#include<stdio.h>

int function();

int i = 10;

int main(){
  int i = 5;
  {
    int i = 3;
    printf("inside def main BLOCK i is %d\n", i);
  }
  printf("inside def main i is %d\n", i);
  function();

  return 0;
}

int function(){
  printf("function: i => %d\n",i);
  return 0;
}
