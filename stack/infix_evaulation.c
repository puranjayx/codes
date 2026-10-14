#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
int main()
{
    char str[77] = "^ + 2 3 2";
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
            continue;
        if ( str[i] >= '0' && str[i] <= '9')
        {
            char nums[77];
            int t = 0;
            while (str[i] >= '0' && str[i] <= '9')
            {
                nums[t] = str[i];
                t++;
                i--;
            }
            nums[t] = '\0';
            int start = 0;
            int end = t - 1;

            while (start < end)
            {
                char temp = nums[start];
                nums[start] = nums[end];
                nums[end] = temp;

                start++;
                end--;
            }
            push(atoi(nums));
            i++;
        }
        else
        {
            int op1 = pop();
            int op2 = pop();

            if (str[i] == '+')
                push(op1 + op2);
            else if (str[i] == '-')
                push(op1 - op2);
            else if (str[i] == '*')
                push(op1 * op2);
            else if (str[i] == '/')
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
    printf("%d ", pop());
    return 0;
}