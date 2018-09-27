#include <stdio.h>

int n=5;
int queue[5];
int F=0,R=0;

void enqueue(int item){
    if(R==n){
        printf("Queue is full\n");
    }else{
        queue[R] = item;
        R++;
    }
}

int dequeue(){
    int item=-1;
    if(F==R){
        printf("Queue is empty\n");
    }else{
        item = queue[F];
        F++;
        if(F==R) F=R=0;
    }
    return item;
}

void showQueue(){
    int i;
    if(F!=R){
        printf("Queue : ");
        for(i=F;i<R;i++)
            printf("%d ",queue[i]);
    }
    printf("\n\n");
}

int main(){
    int c = 1;
    int number;
    int item;

    while(c!=0){
        printf("1 : enqueue\n");
        printf("2 : dequeue\n");
        printf("0 : Exit\n");
        printf("Enter Choice : ");
        scanf("%d",&c);
        
        switch(c){
            case 1 : 
                printf("Enter number : ");
                scanf("%d",&number);
                enqueue(number);
                break;
            case 2 :
                item = dequeue();
                if(item!=-1)
                    printf("Number = %d\n",item);
                break;
        }
        
        showQueue();
    }
    return 0;
}