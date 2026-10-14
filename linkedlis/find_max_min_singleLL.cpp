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
}
void maxmin(struct node **head){
    struct node * temp=*head;
    int mini=INT_MAX;
    int maxi=INT_MIN;
     while(temp!=NULL){
       if(temp->data>maxi){
        maxi=temp->data;
       }
       if(temp->data<mini) {
            mini=temp->data;
       }
       temp=temp->next;
     }
     printf("max element : %d \n",maxi);
     printf("min elemenr : %d",mini);
}
int main(){
    struct node * head =NULL;
    createlist(&head,3);
    display(&head);
    maxmin(&head);
    return 0;
}