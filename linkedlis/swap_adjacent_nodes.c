#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node * next;
};


void createlist(struct node ** head,int x){
        struct node * temp;
    for(int i =0;i<x;i++){
        struct node * newnode=(struct node*)malloc (sizeof(struct node ));
        int data;
        printf("enter the %d node ",i+1);
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(*head==NULL){
            *head = newnode;
            temp=*head;
        }
        else {
            temp->next=newnode;
            temp=newnode;
        }

    }
}
void display(struct node ** head){
     struct node * temp=*head;
     while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
     }
}

// void swapadjacentnodes(struct node **head){ 
//         struct node * first=*head;
//         struct node * prev=NULL;

//         *head=first->next;

//         while(first != NULL && first->next != NULL){
//             struct node * second=first->next;
//             first->next=second->next;
//             second->next=first;

//             if(prev!=NULL){
//                 prev->next=second;
//             }
//             prev=first;
//             first=first->next;
//         }
    
    
// }

void swapadjacentnodes(struct node **head)
{
    struct node *first = *head;
    struct node *prev = NULL;

    if(first == NULL || first->next == NULL)
        return;

    *head = first->next;

    while(first != NULL && first->next != NULL)
    {
        struct node *second = first->next;

        first->next = second->next;
        second->next = first;

        if(prev != NULL)
            prev->next = second;

        prev = first;
        first = first->next;
    }
}


void swapadjacentdata(struct node **head){
    
struct node * temp=*head;
    while(temp!=NULL && temp->next!=NULL){

        int x=0;
        x=temp->data;
        temp->data=temp->next->data;
        temp->next->data=x;
        temp=temp->next->next;
    }
}
int main(){
    struct node * head =NULL;
    createlist(&head,4);
   // swapadjacentnodes(&head);
    swapadjacentdata(&head);
    display(&head);
    
    return 0;
}