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
int isprime(int n)
{
    if(n <= 1)
        return -1;

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
            return -1;
    }

    return 1;
}
void deleteprimenodes(struct node **head){
    struct node * temp=*head;
    struct node * prevnode=temp;
    while(temp!=NULL){
        if(isprime(temp->data)==1){
            if(temp==*head){
                struct node * del=temp;
                *head=(*head)->next;
                temp=temp->next;
                free(del);
            }
            else{
                struct node * del=temp;
                prevnode->next=temp->next;
                temp=temp->next;
                free(del);
                
            }
        }
        else{
                prevnode=temp;
                temp=temp->next;

            }
    }
}
int main(){
    struct node * head =NULL;
    createlist(&head,3);
    deleteprimenodes(&head);
    display(&head);
    return 0;
}