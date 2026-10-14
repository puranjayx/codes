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
void removeduplicate(struct node ** head){
    struct node * temp=*head;
    while(temp!=NULL && temp->next!=NULL){
        if(temp->data==temp->next->data){
            struct node * rem= temp->next;
            temp->next=rem->next;
            free(rem);
        }
        else{
            temp=temp->next;
        }
    }
}
void removeduplicateUNsorted(struct node ** head){
    struct node * current = *head;
    struct node * temp = NULL;
    while(current->next!=NULL){
        temp=current;
        while(temp->next!=NULL){
            if(current->data==temp->next->data){
                struct node * rem= temp->next;
                temp->next=rem->next;
                free(rem);
            }
            else{
                temp=temp->next;
            }
        }
        current=current->next;
    }
}
void removeduplicate_optimized(struct node **head){
    struct node * temp2=*head;
    struct node * temp1=(*head)->next;

    while(temp1!=NULL){
        if(temp2->data==temp1->data){
            struct node*rem=temp1;
            temp1=temp1->next;
            free(rem);
        }
        else{
            temp2->next=temp1;
            temp2=temp1;
            temp1=temp1->next;
        }
    }
    temp2->next=NULL;
}
int main(){
    struct node * head =NULL;
    createlist(&head,5);
    display(&head);
    // removeduplicate(&head);
    // removeduplicateUNsorted(&head);
    removeduplicate_optimized(&head);
    display(&head);
    return 0;
}