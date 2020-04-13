#include<stdio.h>

int main(){
  int a[4] = {1,10,100,1000},i;

  for (i=0; i<4; i++){
    printf("&a[%d] => %p\n", i, &a[i]);
  }
  printf("\na = %p\n", a);
  return 0;
}
/*配列名はその配列の戦闘要素のアドレスを表す*/
