#include<stdio.h>

void swap(int*, int*);

int main(){
  int a, b;

  a = 10;
  b = 100;

/*swapに変数abのアドレスをわたす*/
  swap(&a, &b);

  printf("a => %d  b => %d\n", a, b);

  return 0;
}

/*変数の値を関数で変更するときは変数のアドレスを渡す*/

void swap(int *x, int *y){
  int z;

  z = *x;
  *x = *y;
  *y = z;


  return;
}
