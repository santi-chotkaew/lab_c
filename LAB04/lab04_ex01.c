#include <stdio.h>

int n=10;
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
    int item;
    if(tos==0){
        printf("Stack is full\n");
    }else{
        tos--;
        item=stack[tos];
    }
}
int main(){
    return 0;
}
