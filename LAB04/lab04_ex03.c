#include <stdio.h>

int n=5;
int queue[5];
int F=0,R=0;

void enqueue(int item){
    if(R==n){
        printf("Queue is full");
    }else{
        queue[R] = item;
        R++;
    }
}

int dequeue(){
    int item;
    if(F==R){
        printf("Queue is empty");
    }else{
        item = queue[F];
        F++
        if(F==R) F=R=0;
        return item;
    }
}
