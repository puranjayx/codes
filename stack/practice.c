// // // // #include<stdio.h>
// // // // #include<stdlib.h>
// // // // int stack[33];
// // // // int top=-1;

// // // // void push(int x){
// // // //     if(top==32) return;
// // // //     else {
// // // //         top++;
// // // //         stack[top]=x;
// // // //     }
// // // // }
// // // // int pop(){
// // // //     if(top==-1) return 0;
// // // //     else return stack[top--];
// // // // }
// // // // int main(){
// // // //     char s[55]="23 43 +";
// // // //     for (int i = 0; s[i]!='\0'; i++)
// // // //     {   
// // // //         if(s[i]==' ') continue;
// // // //         if(s[i]>='0' && s[i]<='9'){
// // // //             char nums[66];
// // // //             int idx=0;
// // // //             while(s[i]>='0' && s[i]<='9'){
// // // //                 nums[idx]=s[i];
// // // //                 idx++;
// // // //                 i++;
// // // //             }
// // // //             nums[idx]='\0';
// // // //             push(atoi(nums));
// // // //             i--;
// // // //         }
// // // //         else{
// // // //             int op2=pop();
// // // //             int op1=pop();
// // // //             if(s[i]=='+') 
// // // //                 push(op1+op2);
// // // //             else if(s[i]=='-')
// // // //                 push(op1-op2);
// // // //             else if(s[i]=='*')
// // // //                 push(op1*op2);
// // // //             else if(s[i]=='/')
// // // //                 push(op1/op2);
// // // //         }
// // // //     }
// // // //     printf("%d",pop());
    
// // // //     return 0;
// // // // }


// // // // #include<stdio.h>
// // // // #include<stdlib.h>
// // // // #include<string.h>
// // // // int stack[33];
// // // // int top=-1;

// // // // void push(int x){
// // // //     if(top==32) return;
// // // //     else {
// // // //         top++;
// // // //         stack[top]=x;
// // // //     }
// // // // }
// // // // int pop(){
// // // //     if(top==-1) return 0;
// // // //     else return stack[top--];
// // // // }

// // // // int main(){
// // // //     char s[55]="+ * 23 12 54";
// // // //     int len = strlen(s);

// // // //     for (int i = len-1; i>=0; i--)
// // // //     {
// // // //         if(s[i]==' ') continue;
// // // //         if(s[i]>='0' && s[i]<='9'){
// // // //             char nums[66];
// // // //             int idx=0;
// // // //             while(s[i]>='0' && s[i]<='9'){
// // // //                 nums[idx]=s[i];
// // // //                 i--;
// // // //                 idx++;
// // // //             }
// // // //             nums[idx]='\0';
// // // //             int s=0;
// // // //             int e=idx-1;
// // // //             while(s<e){
// // // //                 char temp= nums[s];
// // // //                 nums[s]=nums[e];
// // // //                 nums[e]=temp;
// // // //                 s++;
// // // //                 e--;
// // // //             }
// // // //             push(atoi(nums));
// // // //            i++;
// // // //         }
// // // //         else{
// // // //             int op1=pop();
// // // //             int op2=pop();
// // // //               if(s[i]=='+') 
// // // //                 push(op1+op2);
// // // //             else if(s[i]=='-')
// // // //                 push(op1-op2);
// // // //             else if(s[i]=='*')
// // // //                 push(op1*op2);
// // // //             else if(s[i]=='/')
// // // //                 push(op1/op2);
// // // //         }
// // // //     }
// // // //     printf("%d",pop());

// // // //     return 0;
// // // // }


// // // // #include<stdio.h>
// // // // int stack[44];
// // // // int top=-1;

// // // // void push(char x){
// // // //     stack[++top]=x;
// // // // }
// // // // int pop(){
// // // //     return stack[top--];
// // // // }
// // // // int priority(char c){
// // // //     if(c=='(') return 0;
// // // //     if(c=='+' || c=='-') return 1;
// // // //     if(c=='*' || c=='/') return 2;
// // // //     if(c=='^') return 3;
// // // // }
// // // // int main(){
// // // //     char str[77]="(2 * 3 + 4 * (5-6))";
// // // //     char postfix[55];
// // // //     int t=0;
// // // //     for (int i = 0; str[i]!='\0'; i++)
// // // //     {   
// // // //         if(str[i] == ' ')
// // // //             continue;
// // // //         //normal numbers
// // // //         else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' || str[i]>='0' && str[i]<='9'){
// // // //             postfix[t++]=str[i];
// // // //         }
// // // //         //open bracket
// // // //         else if(str[i]=='('){
// // // //             push(str[i]);
// // // //         }
// // // //         //close bracket
// // // //         else if(str[i]==')'){
// // // //             char x;
// // // //             while(top!=-1 && (x=pop()) != '('){
// // // //                 postfix[t++]=x;
// // // //             }

// // // //         }
// // // //         //operators
// // // //         else{
// // // //             while(top!=-1 &&((priority(stack[top])>priority(str[i])) || priority((stack[top]) == priority(str[i]) && str[i]!='^'))){
// // // //                 postfix[t++]=pop();
// // // //             }
// // // //             push(str[i]);
// // // //         }
// // // //     }
// // // //     while(top!=-1){
// // // //         postfix[t++]=pop();
// // // //     }
// // // //     postfix[t]='\0';
// // // //     for(int i =0;postfix[i]!='\0';i++){
// // // //         printf("%c",postfix[i]);
// // // //     }
// // // //     return 0;
// // // // }
// // // #include<stdio.h>
// // // #include<string.h>
// // // int stack[44];
// // // int top=-1;

// // // void push(char x){
// // //     stack[++top]=x;
// // // }
// // // char pop(){
// // //     return stack[top--];
// // // }
// // // int priority(char c){
// // //     if(c==')') return 0;
// // //     if(c=='+' || c=='-') return 1;
// // //     if(c=='*' || c=='/') return 2;
// // //     if(c=='^') return 3;
// // // }
// // // int main(){
// // //     char str[77]="(A+B)*(C-D)/E^F^G";
// // //     char postfix[55];
// // //     int t=0;
// // //     int len = strlen(str);
// // //     for (int i = len-1 ; i>=0 ; i--)
// // //     {   
// // //         if(str[i] == ' ')
// // //             continue;
// // //         //normal numbers
// // //         else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' || str[i]>='0' && str[i]<='9'){
// // //             postfix[t++]=str[i];
// // //         }
// // //         //open bracket
// // //         else if(str[i]==')'){
// // //             push(str[i]);
// // //         }
// // //         //close bracket
// // //         else if(str[i]=='('){
// // //             char x;
// // //             while(top!=-1 && (x=pop()) != ')'){
// // //                 postfix[t++]=x;
// // //             }

// // //         }

// // //         else{
// // //             while(top!=-1 && ((priority(stack[top])>priority(str[i])) || (priority(stack[top])==priority(str[i]) && str[i]=='^'))){
// // //                 postfix[t++]=pop();
// // //             } 
// // //             push(str[i]);
// // //         }
// // //         //operators
// // //        // else{
// // //         //     while(top!=-1 &&((priority(stack[top])>priority(str[i])) || (priority(stack[top]) == priority(str[i]) && str[i]=='^'))){
// // //         //         postfix[t++]=pop();
// // //         //     }
// // //         //     push(str[i]);
// // //         // }
// // //     }
// // //     while(top!=-1){
// // //         postfix[t++]=pop();
// // //     }
// // //     postfix[t]='\0';
// // //     int len2=strlen(postfix);
// // //     for(int i=len2-1 ;i>=0;i--){
// // //         printf("%c ",postfix[i]);
// // //     }
// // //     return 0;
// // // }


// // #include<stdio.h>
// // #include <stdlib.h>
// // #include<math.h>
// // int stack[55];
// // int top=-1;

// // void push(int x){
// //     stack[++top]=x;
// // }
// // int pop(){
// //     return stack[top--];
// // }

// // int main(){
// //     char  str[77]="^ + 2 3 2";
// //     int len = 0;
// //     while (str[len]!='\0')
// //     {
// //         len++;
// //     }
    
// //     for (int i=len-1;i>=0; i--)
// //     {   
// //         if(str[i]==' ') continue;
// //         if(str[i]>='0' && str[i]<='9'){
// //             char nums[66];
// //             int t=0;
// //             while(str[i]>='0' && str[i]<='9'){
// //                 nums[t]=str[i];
// //                 i--;
// //                 t++;
// //             }
// //             nums[t]='\0';
// //             int s=0;
// //             int e=t-1;
// //             while(s<e){
// //                 int temp = nums[s];
// //                 nums[s]=nums[e];
// //                 nums[e]=temp;
// //                 s++;
// //                 e--;
// //             }
// //             push(atoi(nums));
// //             i++;
// //         }
// //         else{
// //             int el1=pop();
// //             int el2=pop();
// //             if(str[i]=='+') push(el1+el2);
// //             else if(str[i]=='-') push(el1-el2);
// //             else if(str[i]=='*') push(el1*el2);
// //             else if(str[i]=='/') push(el1/el2);
// //                else if(str[i]=='^'){
// //                 int ans = 1;

// //                 for(int j=0; j<el2; j++){
// //                     ans = ans * el1;
// //                 }
// //                 push(ans);
// // }
            
// //         }

// //     }
// //     printf("%d",pop());

// //     return 0;
// // }

// // // #include<stdio.h>
// // // #include<stdlib.h>
// // // #include<math.h>
// // // int stack[55];
// // // int top=-1;

// // // void push(int x){
// // //     if(top==54) return;
// // //     else stack[++top]=x;
// // // }
// // // int pop(){
// // //     return stack[top--];
// // // }
// // // int main(){
// // //     char str[77]="2 3 + 2 ^";
// // //     for (int i = 0; str[i]!='\0'; i++)
// // //     {
// // //         if(str[i]==' ') continue;
// // //         if(str[i]>='0' && str[i]<='9'){
// // //             char nums[66];
// // //             int t=0;
// // //             while(str[i]>='0' && str[i]<='9'){
// // //                 nums[t]=str[i];
// // //                 i++;
// // //                 t++;
// // //             }
// // //             nums[t]='\0';
// // //             push(atoi(nums));
// // //             i--;
// // //         }
// // //         else{
// // //             int el2=pop();
// // //             int el1=pop();

// // //             if(str[i]=='+') push(el1+el2);
// // //             else if(str[i]=='-') push(el1-el2);
// // //             else if(str[i]=='*') push(el1*el2);
// // //             else if(str[i]=='/') push(el1/el2);
// // //             else if(str[i]=='^'){
// // //                 int ans = 1;

// // //                 for(int j=0; j<el2; j++){
// // //                     ans = ans * el1;
// // //                 }
// // //                 push(ans);
// // // }   
// // //         }
// // //     }
// // //     printf("%d",pop());
// // //     return 0;
// // // }


// #include<stdio.h>
// int stack[55];
// int top=-1;

// void push(int x){
//     stack[++top]=x;
// }
// int pop(){
//     return stack[top--];
// }
// int priority(char c){
//     if(c=='(') return 0;
//     else if(c=='+' || c=='-') return 1;
//     else if(c=='*' || c=='/') return 2;
//     else if(c=='^') return 3;
// }
// int main(){
//     char str[66]="12+A*3";
//     char postfix[66];
//     int t=0;
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]==' ') continue;
//         else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' ){
//             postfix[t++]=str[i];
//             postfix[t++]=' ';
//         }
//         else if(str[i]>='0' && str[i]<='9'){
//             while(str[i]>='0' && str[i]<='9'){
//                 postfix[t++]=str[i];
//                 i++;
//             }
//             postfix[t++]=' ';
//             i--;
//         }
//         else if(str[i]=='('){
//             push(str[i]);
//         }
//         else if (str[i]==')'){
//             char x;
//             while(top!=-1 && (x=pop()) != '('){
//                 postfix[t++]=x;
//             }
//         }
//         else{ 
//            while(top!=-1 && (priority(stack[top])>priority(str[i]) || (priority(stack[top])==priority(str[i]) && str[i]!='^'))){
//                     postfix[t++]=pop();
//         }
//         push(str[i]);
//     }

//     }
//     while(top!=-1)
//     {
//         postfix[t++]=pop();
//     }
//     postfix[t]='\0';
//     for (int i = 0; postfix[i]!='\0'; i++)
//     {
//         printf("%c",postfix[i]);
//     }
//    // printf("%s ",postfix);
    
//     return 0;
// }



#include<stdio.h>
#include<string.h>
int stack[66];
int top=-1;
void push(int x){
    stack[++top]=x;
}
int pop(){
    return stack[top--];
}
int priority(char c){
    if(c==')') return 0;
    else if(c=='-' || c=='+') return 1;
    else if(c=='/' || c=='*') return 2;
    else if(c=='^') return 3;
}

int main(){
    char str[77]="(A+B)*C";
    int len =0;
    char prefix[77];
    int t=0;
    while (str[len]!='\0')
    {
        len++;
    }
    for (int i = len-1;i>=0; i--)
    {
        if(str[i]==' ') continue;
        else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' || str[i]>='0' && str[i]<='9'){
            prefix[t++]=str[i];
        }
        else if(str[i]==')'){
            push(str[i]);
        }
        else if(str[i]=='('){
            char x;
            while(top!=-1 && (x=pop())!=')'){
                prefix[t++]=x;
            }
        }
        else{
            while(top!=-1 && (priority(stack[top])>priority(str[i]) 
        ||  (priority(str[i])==priority(stack[top]) && 
            str[i]=='^')))
            {
                prefix[t++]=pop();
            }
            push(str[i]);
        }
    }
    while(top!=-1){
        prefix[t++]=pop();
    }
    prefix[t]='\0';
     int n = strlen(prefix);

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%c ", prefix[i]);
    }

    return 0;
}