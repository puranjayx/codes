#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};


void createmainlist(struct node ** head,int x){
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
void insert(struct node ** head3,int x){
    struct node * newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;

    if(*head3==NULL){
        *head3=newnode;
        return;
    }
    struct node * temp=*head3;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;

}
struct node * mergelist(struct node * head1,struct node* head2){
    struct node * head3=NULL;

    while(head1!=NULL && head2!=NULL){
        if(head1->data<head2->data){
            insert(&head3,head1->data);
            head1=head1->next;
        }
        else{
            insert(&head3,head2->data);
            head2=head2->next;
        }
    }
    while(head1!=NULL){
        insert(&head3,head1->data);
            head1=head1->next;
    }
    while(head2!=NULL){
        insert(&head3,head2->data);
            head2=head2->next;
    }
    return head3;
}

int main(){

    struct node * head1 =NULL;
    struct node * head2 =NULL;
    printf(" enter first node : \n");
    createmainlist(&head1,3);
    printf(" enter first node : \n");
    createmainlist(&head2,3);
    struct node * head3= mergelist(head1,head2);
    display(&head3);
    return 0;
}