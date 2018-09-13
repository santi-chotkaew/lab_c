#include <stdio.h>

void swop(int *x,int *y){
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}

int main (){
  int a = 5,b=3;
  int *p,*q;

  p=&a;
  q=&b;
  
  printf("\n%d : %d",a,b);
  swop(p,q);
  printf("\n%d : %d",a,b);

  return 0;
}
