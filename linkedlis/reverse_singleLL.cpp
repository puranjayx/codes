#include<iostream>
#include<stdlib.h>
#include<limits.h>
using namespace std;

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
     printf("\n");
}
void reverse(struct node ** head){
    struct node * prevnode=NULL;
    struct node * current=*head;
    struct node * nextnode=*head;

    while (nextnode!=NULL)
    {
        nextnode=nextnode->next;
        current->next=prevnode;
        prevnode=current;
        current=nextnode;
    }
    *head=prevnode;
}
int main(){
    struct node * head =NULL;
    createlist(&head,3);
    display(&head);
    reverse(&head);
    display(&head);
    return 0;
}