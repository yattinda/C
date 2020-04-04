#include <stdio.h>

int main(){

  int a1, a2;

  a1 = 5;
  a2 = 5;

  a1 = a1++ + 2;
  printf("a1 = %d\n", a1);

  printf("a2 = %d\n", a2++ + 2);
  /*ここ８になると思うけど*/

  return 0;
}
