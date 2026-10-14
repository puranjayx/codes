#include <stdio.h>
int stack[77];
int top = -1;

void push(char x)
{
    if (top == 76)
    {
        return;
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
char pop()
{
    if (top == -1)
        return '\0';
    else
    {
        return stack[top--];
    }
}
int proprity(char c)
{
    if (c == '(')
    {
        return 0;
    }
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    if (c == '^')
        return 3;
}

int main()
{

    char postfix[77];
    int t = 0;
    char str[55] = "(2 * 3 + 4 * (5-6))";
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            continue;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
        {
            postfix[t++] = str[i];
        }
        else if (str[i] == '(')
        {
            push(str[i]);
        }
        else if (str[i] == ')')
        {
            char x;
            while (top != -1 && (x = pop()) != '(')
            {
                postfix[t++] = x;
            }
        }
        else
        { 
            // operators
            while (top != -1 && ((proprity(stack[top]) > proprity(str[i])) ||
                                 (proprity(stack[top]) == proprity(str[i]) && str[i] != '^')))
            {
                postfix[t++] = pop();
            }
            push(str[i]);
        }
    }
    while (top != -1)
    {
        postfix[t++] = pop();
    }
    postfix[t] = '\0';
    for (int i = 0; postfix[i] != '\0'; i++)
    {
        printf("%c ", postfix[i]);
    }
    return 0;
}