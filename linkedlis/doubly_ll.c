#include<stdio.h>
struct node
{
    int data;
    struct node * next;
    struct node * prev;
};
void createlist(struct node ** head,struct node ** tail,int n){
    
    
    for(int i =0;i<n;i++){
        struct node * newnode= (struct node*) malloc (sizeof(struct node));
        newnode->prev=0;
        newnode->next=0;
        scanf("%d",&newnode->data);
        if(*head==0){
            *head=newnode;
            *tail=*head;
            
        }
        else{
                (*tail)->next=newnode;
                newnode->prev=*tail;
                *tail = newnode;
            }
     }
}
void insertatbegin(struct node ** head,struct node ** tail){
    struct node * newnode= (struct node*) malloc (sizeof(struct node));
        newnode->prev=0;
        newnode->next=0;
        scanf("%d",&newnode->data);
        
        
        newnode->next=*head;
        (*head)->prev=newnode;
        *head=newnode;

}
void insertatend(struct node ** head,struct node ** tail){
       struct node * newnode= (struct node*) malloc (sizeof(struct node));
        newnode->prev=0;
        newnode->next=0;
        scanf("%d",&newnode->data);

        (*tail)->next=newnode;
        newnode->prev=*tail;
        *tail=newnode;
}

void insertatanypos(struct node ** head,struct node ** tail){
       
        if(pos>count){return ;}

        else{
            struct node * newnode= (struct node*) malloc (sizeof(struct node));
             struct node * temp=*head;
            int pos;
            scanf("%d",&pos);
        
            int i=1;
            while(i<pos-1){
                temp=temp->next;
            }
            newnode->prev=temp;
            newnode->next=temp->next;
            temp->next=newnode;
            newnode->next->prev=newnode;
        }

}
void insertafterpos(struct node ** head,struct node ** tail){
       
        if(pos>count){return ;}

        else{
            struct node * newnode= (struct node*) malloc (sizeof(struct node));
             struct node * temp=*head;
            int pos;
            scanf("%d",&pos);
        
            int i=1;
            while(i<pos){
                temp=temp->next;
            }
            newnode->prev=temp;
            newnode->next=temp->next;
            temp->next=newnode;
            newnode->next->prev=newnode;
        }

}
void deletefrombeg(struct node ** head ,struct node ** tail){
    if(*head==NULL) return;
    else if((*head)->next==NULL){
        *head=NULL;
        return;
    }
    else{
        struct node * temp=*head;
        *head=(*head)->next;
        (*head)->prev=NULL;
        temp->next=NULL; //optional
        free(temp);
        }

}
void deletefromend(struct node ** head ,struct node ** tail){
    if(*tail==NULL) return;
    struct node * temp=*tail;
    *tail=(*tail)->prev;
    (*tail)->next=NULL;
    temp->prev=NULL; //optional
    free(temp);

}
void deletefromanypos(struct node ** head ,struct node ** tail){
    int pos;
    printf("enter position ");
    scanf("%d",&pos);
    if(pos==1) deletefrombeg(head,tail);
    int i =1;
    struct node * temp=*tail;
    while (i<pos)
    {
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
    

}
int main(){
    struct node * head=NULL;
    struct node * tail=NULL;
    int n;
    printf("enter how many nodes : ");
    scanf("%d",&n);
    createdlist(&head,&tail,n);
    insertatbegin(&head,&tail);
    insertatend(&head,&tail);
    insertatanypos(&head,&tail);
    insertafterpos(&head,&tail);
    deletefrombeg(&head,&tail);
    return 0;
}