#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  float *height, sum=0.0, average;
  
  printf("Enter mumbers of Student : ");
  scanf("%d",&n);
  
  height = malloc(sizeof(float) * n);
  
  for(int i=0;i<n;i++){
    printf("Student %d's height : ",i+1);
    scanf("%f",&height[i]);
    sum += height[i];
  }
  
  printf("\nAverage Height = %.2f",sum/n);

  free(height);
  
  return 0;
}
