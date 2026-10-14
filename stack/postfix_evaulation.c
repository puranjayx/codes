#include<stdio.h>
#include<stdlib.h>

int stack[100];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main(){
    char str[66]="2 3 + 2 ^";
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' ') continue;
        if(str[i]>='0' && str[i]<='9'){
            char nums[66];
            int t=0;
            while(str[i]>='0' && str[i]<='9'){
                nums[t]=str[i];
                i++;
                t++;
            }
            nums[t]='\0';
            push(atoi(nums));
            i--;
        }
        else{
        int op2 = pop();
        int op1 = pop();
        if(str[i]=='+')
            push(op1 + op2);
        else if(str[i]=='-')
            push(op1 - op2);
        else if(str[i]=='*')
            push(op1 * op2);
        else if(str[i]=='/')
            push(op1 / op2);
        
        else if(str[i]=='^'){
            int ans = 1;
            for(int j=0; j<op2; j++){
                ans = ans * op1;
            }
            push(ans);
} 
    }
}
    printf("%d",pop());
    return 0;
}