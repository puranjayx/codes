
#include<stdio.h>
#include <stdlib.h>
#include<math.h>
int stack[55];
int top=-1;

void push(int x){
    stack[++top]=x;
}
int pop(){
    return stack[top--];
}

int main(){
    char  str[77]="^ + 2 3 2";
    int len = 0;
    while (str[len]!='\0')
    {
        len++;
    }
    
    for (int i=len-1;i>=0; i--)
    {   
        if(str[i]==' ') continue;
        if(str[i]>='0' && str[i]<='9'){
            char nums[66];
            int t=0;
            while(str[i]>='0' && str[i]<='9'){
                nums[t]=str[i];
                i--;
                t++;
            }
            nums[t]='\0';
            int s=0;
            int e=t-1;
            while(s<e){
                int temp = nums[s];
                nums[s]=nums[e];
                nums[e]=temp;
                s++;
                e--;
            }
            push(atoi(nums));
            i++;
        }
        else{
            int el1=pop();
            int el2=pop();
            if(str[i]=='+') push(el1+el2);
            else if(str[i]=='-') push(el1-el2);
            else if(str[i]=='*') push(el1*el2);
            else if(str[i]=='/') push(el1/el2);
            else if(str[i] == '^')
                push(pow(el1, el2));
            
        }

    }
    printf("%d",pop());

    return 0;
}