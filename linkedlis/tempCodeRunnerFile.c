#include<stdio.h>
#define max 100
int stack[max];
int top=-1;


void insert(int x){
    if(top==max-1) return;
    else{
        top++;
        stack[top]=x;
    }
}
void delete(){
    if(top==-1) return;
    else{
        top--;
    }
}
void display(){
    for(int i = top ;i>=0;i--){
        printf("%d",stack[i]);
    }
}
void peek(){
    printf("%d",stack[top] );
}

int main(){
     insert(10);
    insert(20);
    insert(30);

    display();

    return 0;
}