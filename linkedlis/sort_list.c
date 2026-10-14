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

void srotlist(struct node ** head){
    struct node * ptr=*head;
    struct node * spt=NULL;

    while(ptr->next!=NULL){
        spt=ptr->next;
        while (spt!=NULL)
        {
            if(ptr->data>spt->data){
                int temp =ptr->data;
                ptr->data=spt->data;
                spt->data=temp;
            }
            spt=spt->next;
        }
        ptr=ptr->next;
        
    }
}

int main(){

    struct node * head =NULL;
    createlist(&head,3);
    display(&head);
    srotlist(&head);
    printf("\0");
    display(&head);
    return 0;
}