#include<iostream>
#include<stdlib.h>
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
void search(struct node ** head ){
    int num;
    printf("enter the element you want to search : ");
    scanf("%d",&num);

    struct node * temp=NULL;
    temp = *head;
    while(temp!=NULL){
        if(temp->data==num){
            printf("found the element  ");
            break;
        }
        temp=temp->next;
    }
}

int main(){
    struct node * head =NULL;
    createlist(&head,3);
    display(&head);
    search(&head);
    return 0;
}