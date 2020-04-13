#include<stdio.h>

int main(){
  int i, j;

  for( i = 0; i < 4; i++) {
    printf("outside1 i = %d\n", i);
      for (j = 0; j < 3; j++) {
        printf("inside j = %d\n", j);
      }
    printf("outside2 i = %d\n",i);
  }
  return 0;
}
