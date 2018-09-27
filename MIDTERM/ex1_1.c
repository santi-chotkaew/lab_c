#include <stdio.h>

int main(){
    int a[2][2] = {{1,2},{3,4}};
    int i,*p;

    p = a;
    for(i=0;i<4;i++){
        printf("%d : ",*p);
        p++;
    }
    
}