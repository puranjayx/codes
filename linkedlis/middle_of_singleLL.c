// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node * next;
// };


// void createlist(struct node ** head,int x){
//         struct node * temp;
//     for(int i =0;i<x;i++){
//         struct node * newnode=(struct node*)malloc (sizeof(struct node ));
//         int data;
//         printf("enter the %d node ",i+1);
//         scanf("%d",&newnode->data);
//         newnode->next=NULL;

//         if(*head==NULL){
//             *head = newnode;
//             temp=*head;
//         }
//         else {
//             temp->next=newnode;
//             temp=newnode;
//         }

//     }
// }
// void display(struct node ** head){
//      struct node * temp=*head;
//      while(temp!=NULL){
//         printf("%d ",temp->data);
//         temp=temp->next;
//      }
//      printf("\n");
// }
// void findmiddle(struct node **head ){
//       //   struct node * temp=*head;
//     //     int count=0;
//     //      while(temp!=NULL){
//     //     count++;
//     //     temp=temp->next;
//     //  }
//     //  int middle=count/2;
//     struct node * slow=*head;
//     struct node * fast=*head;
//     while(fast!=NULL && fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     // temp=*head;
//     //  int i =0;
//     //  while(i<middle){
//     //     temp=temp->next;
//     //     i++;
//     //  }
//      printf("%d",slow->data);
// }
// int main(){
//     struct node * head=NULL;
//     createlist(&head,5);
//     findmiddle(&head);
//     display(&head);
//     return 0;   
// }



#include<stdio.h>
struct node {
    int data;
    struct node * next;
};
void createlist(struct node ** head,int n){
    struct node * temp=NULL;
    for (int i = 0; i < n; i++)
    {
        struct node * newnode=(struct node*) malloc(sizeof(struct node));
        printf("enter the data for %d node ",i+1);
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(*head ==NULL) {
            *head = newnode;
            temp=*head;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    
}
void middleoflist(struct node **head){
    struct node * slow=*head;
    struct node * fast=*head;

    while(fast->next!=NULL && fast != NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    printf("%d",slow->data);
}       
int main(){
    struct node * head=NULL;
    createlist(&head,5);
    middleoflist(&head);
    return 0;
}