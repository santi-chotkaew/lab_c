#include <stdio.h>

void swop(int *x,int *y){
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}
void printA(int *a){
  for(int i=0;i<10;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}

int main (){
  int a[10] = {};
  int *p,*q;

  for(int i=0;i<10;i++){
    printf("Enter number %d : ",i);
    scanf("%d",&a[i]);
  }
  printA(a);

  p=a;
  q=&a[9];
  
  for(int i=0;i<5;i++){
    swop(p,q);
    p++;
    q--;
  }
  printA(a);

  return 0;
}
