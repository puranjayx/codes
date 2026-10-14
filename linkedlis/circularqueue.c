#include<stdio.h>
#define max 11;
int queue[max];
int rear =-1;
int front =-1;

void enqueue(int x)
{   
    if((rear+1)%max == front){
        printf("full man reduce krle ");
        return;
    }

    else if(rear==-1 && front ==-1 ){
        rear=front=0;
        queue[rear]=x;

    }
    else{
    rear=(rear+1)%max;
    queue[rear]=x;
    }
}
void deque(){
    if(front == -1 && rear==-1){
        pritnf("bina add kre hata rha h nalla : ");
        return;
    }
    else if(front == rear){
        front=rear=-1;

    }
    else{
        front = (front+1)%max;
    }
}
void display(){
    for(int i =front ;i!=rear;((i+1)%max)){
        printf("%d",queue[i]);
    }
}
int main(){
    
    return 0;
}