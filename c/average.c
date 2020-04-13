#include<stdio.h>

int main(){
  int a = 0, num = 0, sum = 0;


  while(a != 99999){
    printf("99999 stop program\n");
    scanf("%d", &a);
      if(a != 99999){
        sum = sum + a;
        num++;
        }
      }
      printf("num => %d, sum => %d, ave => %f\n", num, sum, (double)sum/num );
      return 0;
}
