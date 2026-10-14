// #include<stdio.h>
// #include<stdlib.h>
//  struct node
// {
//     int data;
//     struct node * next;
// };

// void linkedlisttravse(struct node * ptr){
//     while(ptr!=NULL){
//         printf("%d",ptr->data);
//         ptr=ptr->next;
//     }
        
// }

// int main(){
    
//     struct node * head;
//     struct node * second;
//     struct node * third;
//     struct node * fourth;

//     head = (struct node*) malloc(sizeof(struct node));
//     second = (struct node*) malloc(sizeof(struct node));
//     third = (struct node*) malloc(sizeof(struct node));
//     fourth = (struct node*) malloc(sizeof(struct node));

//     head->data=7;
//     head->next = second;


//     second->data=5;
//     second->next = third;


//     third->data=9;
//     third->next = fourth;


//     third->data=9;
//     third->next = NULL;

//     linkedlisttraverse(head);
//     return 0;
// }


#include<stdio.h>
struct node
{
    int data;
    struct node * next;
};
void createlist(struct node **head ,int n){
    
    
    struct node * temp=NULL;
    for (int i = 0; i < n; i++)
    {
        struct node * newnode = (struct node*) malloc(sizeof(struct node));

        printf("enter data to put in the %d node : ",i+1);
        scanf("%d",&newnode->data);

        newnode->next=0;

        if(*head==NULL){
            *head=newnode;
            temp = *head;
        }
        else {
            temp->next=newnode;
            temp=newnode;
        }
        
    }
    
}
void  insertatbegin(struct node ** head,int x){
    struct node * newnode = (struct node*) malloc(sizeof(struct node));
    
    newnode->data=x;
    newnode->next=0;
    newnode->next=*head;
    *head=newnode;
}
void insertatend(struct node ** head , int x){
    struct node * newnode = (struct node*) malloc(sizeof(struct node));
    struct node * temp=*head;
     newnode->data=x;
     newnode->next=0;
    while(temp->next!=0){
        temp = temp->next;
    }
    temp->next=newnode;
}
void insertatanypos(struct node ** head , int x,int pos){
    struct node * newnode = (struct node*) malloc(sizeof(struct node));
    struct node * temp=*head;
    newnode->data=x;
    int count =0;
    while(temp!=0){
        temp = temp->next;
        count++;
    }
    if(pos>count) {
    printf("out of linked list position "); 
    return;
    }
    else{
        temp=*head;
        int i =1;
        while (i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }

}   

void deletefrombeg(struct node **head){
    if(*head ==0) return;
    if((*head)->next==0){
        *head=0;
    }
    struct node * temp;
    temp=*head;
    *head=(*head)->next;
    free(temp);
}

void deletefromend(struct node **head){
    struct node * temp;
    struct node * prevnode;
    temp = *head;

    while(temp->next!=0){
        prevnode=temp;
        temp=temp->next;
    }
    if(temp==head){
        head=0;
    }
    else{
        prevnode->next=0;
    }
    free(temp);
}
void deletefromanypos(struct node **head){
    int pos;
    printf("enter position to delete : ");
    scanf("%d",&pos);

    if(pos==1) deletefrombeg(head); return;
    struct node * temp;
    struct node * nextnode;
    temp = *head;
    int i =1;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}
void lengthoflist(struct node **head){
    int count =0;
    struct node * temp;
    temp = *head;
    if(*head==0)return;
    else{
        while(temp!=0){
            count++;
            temp=temp->next;
        }
    } 
    printf("%d",count);
}
void display(struct node ** head){
     struct node * temp=*head;
     while(temp!=0){
        printf("%d",temp->data);
        temp=temp->next;
     }
}

void reverse(struct node **head){
    struct node * prevnode=0;
    struct node * currentnode=*head;
    struct node * nextnode=*head;


    while(nextnode!=0){
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=nextnode;
}
int main(){
    struct node * head=NULL;

    int n;
    printf("enter how many nodes you want : ");
    scanf("%d",&n);
    createlist(&head,n);
    insertatbegin(&head,7);
    insertatend(&head,8);
    insertatanypos(&head,9,3);
    deletefrombeg(&head);
    deletefromend(&head);
    deletefromanypos(&head);
    lengthoflist(&head);
    display(&head);



    return 0;
}