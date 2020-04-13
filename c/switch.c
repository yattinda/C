#include<stdio.h>

int main(){
  int c ;
  int end = 0;

  while(1){
    printf("A.ant\n");
    printf("B.bear\n");
    printf("C.cat\n");
    printf("D.dog\n");

    while(1){
      c = getchar();
      if (c != '\n'){
        break;
      /*ｃが￥ｎのときgetchar()を継続*/
      }
    }

    switch (c) {
      case 'A':
      case 'a':
        printf("\n...\n");
        break;
      case 'B':
      case 'b':
        printf("\nroar!\n");
        break;
      case 'C':
      case 'c':
        printf("\nmeow\n");
        break;
      case 'D':
      case 'd':
        printf("\nbow!\n");
        break;
      default:
        printf("\nImproper input\n");
        break;
    }
    if(end = 1){
      break;
    }
  }
  printf("\nend\n\n");

  return 0;
}
