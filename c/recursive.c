#include<stdio.h>

int kaijo(int);

int main(){
  int i;
  for (i = 0; i<100; i++){
    printf("%d! = %d\n", i, kaijo(i));
  }
    return 0;

}

int kaijo(int n){
  return(n == 0) ? 1: n*kaijo(n-1);
}
