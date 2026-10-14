#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if (top == -1)
        return '\0';

    return stack[top--];
}

int priority(char c)
{
    if (c == ')')
        return 0;
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    if (c == '^')
        return 3;
}
int main()
{
    char str[] = "(A+B)*(C-D)/E^F^G";
    char prefix[100];

    int k = 0;

    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        char ch = str[i];
        if (ch == ' ')
            continue;
        else if ((ch >= 'A' && ch <= 'Z') ||
                 (ch >= 'a' && ch <= 'z') ||
                 (ch >= '0' && ch <= '9'))
        {
            prefix[k++] = ch;
        }
        else if (ch == ')')
        {
            push(ch);
        }
        else if (ch == '(')
        {

           char x;
           while(top!=-1 && (x=pop())!=')'){
            prefix[k++]=x;
           }
        }
        else
        {
            while (top != -1 &&
                   (priority(stack[top]) > priority(ch) ||
                    (priority(stack[top]) == priority(ch) && ch == '^')))
            {
                prefix[k++] = pop();
            }
            push(ch);
        }
    }

    while (top != -1)
    {
        prefix[k++] = pop();
    }

    prefix[k] = '\0';

    // reverse result
    int n = strlen(prefix);

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%c ", prefix[i]);
    }

    return 0;
}