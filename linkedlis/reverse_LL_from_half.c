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
     printf("\n");
}
void reverseaftermiddle(struct node **head ){
      //   struct node * temp=*head;
    //     int count=0;
    //      while(temp!=NULL){
    //     count++;
    //     temp=temp->next;
    //  }
    //  int middle=count/2;
   
    // temp=*head;
    //  int i =0;
    //  while(i<middle){
    //     temp=temp->next;
    //     i++;
    //  }
     struct node * slow=*head;
    struct node * fast=*head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    struct node * current=slow->next;
    struct node * nextnode=slow->next;
    struct node * prev=NULL;

    
    while(nextnode!=NULL){
        nextnode=nextnode->next;
        current->next=prev;
        prev=current;
        current=nextnode;
    }
    slow->next=prev;
}
int main(){
    struct node * head=NULL;
    createlist(&head,5);
    reverseaftermiddle(&head);
    display(&head);
    return 0;   
}