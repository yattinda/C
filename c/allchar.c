#include<stdio.h>

int main(){

  char i;

  for (i = 0; i<'~'; i++){
    printf("%3d(0x%2X) -- %c ",i, i, i);
    if ((i - '!' + 1) % 4 == 0);
      printf("\n");
  }
  printf("\n");

  return 0;
}
