#include <stdio.h>

int n = 10;
int stack[10];
int tos=0;

void push(int item){
    if(tos==n){
        printf("Stack is full\n");
    }else{
        stack[tos]=item;
        tos++;
    }
}

int pop(){
    int item=-1;
    if(tos==0){
        printf("Stack is full\n");
    }else{
        tos--;
        item=stack[tos];
    }
    return item;
}
int main(){
    int numbers[n];
    int i;

    for(i=0;i<n;i++){
        printf("Enter numbers : ");
        scanf("%d",&numbers[i]);
    }
    
    for(i=0;i<n;i++){
        push(numbers[i]);
    }

    for(i=0;i<n;i++){
        printf("%d ",numbers[i]);
    }
    printf("\n");

    for(i=0;i<n;i++){
        printf("%d ",pop());
    }
    printf("\n");
    
    return 0;
}
