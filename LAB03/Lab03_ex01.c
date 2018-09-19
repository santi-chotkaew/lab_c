#include <stdio.h>

int a[2][3],b[3][2];
int *p,*q;
int i,j,x,y;

int main(){
  p = a;
  for(x=0;x<6;x++){
    *p = x;
    p++;
  }

  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
      printf("%d ",a[i][j]);
      b[j][i] = a[i][j];
    }
    printf("\n");
  }
  q = b;
  for(y=0;y<6;y++){
    printf("%d ",*q);
    q++;
  }

  return 0;
}
