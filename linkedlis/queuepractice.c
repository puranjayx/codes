#include<stdio.h>
#define max 11
int queue[max];
int rear=-1;
int front=-1;

void insert(int x)
{
    if(rear==max-1){
        pritnf("full ");
        return ;
    }
    else if(rear ==-1 && front ==-1){
        rear=front=0;
        stack[rear]=x;
    }
    else{
        rear++;
        stack[rear]=x;
    }
}

void dequeue(){
    if(front ==-1 && rear==-1){
        printf("enmpty");
        return;
    }
    else if(front == rear){
        front = rear= -1;
    }
    else{
        front++;
    }
}
void display(){
    for(int i = front ;i<=rear;i++){
        printf("%d ",stack[i]);
    }
}
void isempty(){
    if(front == -1 && rear == -1){
        printf("queue is empty wtf dont u know that : ");
    }


}

int main(){
    
    return 0;
}