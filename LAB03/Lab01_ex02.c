#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n=3;
  int a[n];
  int *vec;
  vec = malloc(sizeof(int) * n);
  
  for(int i=0;i<n;i++){
    a[i] = vec[i] = i; 
  }
  
  for(int i=0;i<n;i++){
    printf("%d ", a[i]);
  }
  printf("\n");
  
  for(int i=0;i<n;i++){
    printf("%d ", vec[i]);
  }

  free(vec);
  
  return 0;
}
