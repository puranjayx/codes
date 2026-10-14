#include<stdio.h>
#include<stdlib.h>

struct node {
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
void deletenodesinmultipleofK(struct node **head,int k){
    struct node * temp=*head;
    struct node * prevnode=*head;
    while (temp!=NULL)  
    {
        
        if(temp->data%k==0){

                 if(temp == *head)
            {
                *head = temp->next;

                struct node *del = temp;
                temp = temp->next;

                free(del);
            }
            else {
            prevnode->next=temp->next;
            struct node * del=temp;
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
    int n;
    struct node * head=NULL;
    scanf("%d",&n);
    createlist(&head,n);
    display(&head);
    deletenodesinmultipleofK(&head,5);
    display(&head);
    return 0;
}