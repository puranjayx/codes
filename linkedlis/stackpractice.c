#include<stdio.h>
#define max 100
int stack[max];
int top=-1;


void push(int x){
    if(top==max-1) return;
    else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top==-1) return;
    else{
        top--;
    }
}
void display(){
    if(top==-1) printf("stack is empty");
    for(int i = top ;i>=0;i--){
        printf("%d",stack[i]);
    }
}
void peek(){
    printf("%d",stack[top] );
}

int main(){
int x;
    while(1){
        int n;
        printf("enetr 1 for push , 2 for pop,3 for display,4 for peek : ");
        scanf("%d" ,&n);

        switch (n)
        {
        case 1:
            
            printf("enter the value to push in the stack ");
            scanf("%d",&x);
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        default:
            break;
        }
    }

    return 0;
}