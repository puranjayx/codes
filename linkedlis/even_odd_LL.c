// #include<stdio.h>
// #include<stdlib.h>
// #include<limits.h>


// struct node
// {
//     int data;
//     struct node * next;
// };
// struct even
// {
//     int data;
//     struct even * next;
// };
// struct odd
// {
//     int data;
//     struct odd * next;
// };


// void createlist(struct node ** head,int x){
//         struct node * temp;
//     for(int i =0;i<x;i++){
//         struct node * newnode=(struct node*)malloc (sizeof(struct node ));
//         int data;
//         printf("enter the %d node ",i+1);
//         scanf("%d",&newnode->data);
//         newnode->next=NULL;

//         if(*head==NULL){
//             *head = newnode;
//             temp=*head;
//         }
//         else {
//             temp->next=newnode;
//             temp=newnode;
//         }

//     }

// }
// void evenoddlist(struct node **head ,struct even ** evenhead ,struct odd ** oddhead){

//     struct node * temp=*head;
//     struct even * eventemp=NULL;
//     struct odd * oddtemp=NULL;
//     int i =1;
//     while(temp!=NULL){
//         if(i%2==0){
//             struct even * evennewnode=(struct even*)malloc (sizeof(struct even ));
//             evennewnode->data=temp->data;
//             evennewnode->next=NULL;
//             if(*evenhead==NULL){
//                 *evenhead=evennewnode;
//                 eventemp=*evenhead;
//             }
//             else{
//                 eventemp->next=evennewnode;
//                 eventemp=evennewnode;
//             }


//         }
//         else if(i%2!=0){
//             struct odd * oddnewnode=(struct odd*)malloc (sizeof(struct odd ));
//             oddnewnode->data=temp->data;
//             oddnewnode->next=NULL;

//             if(*oddhead==NULL){
//                 *oddhead=oddnewnode;
//                 oddtemp = *oddhead;
//             }
//             else{
//                 oddtemp->next=oddnewnode;
//                 oddtemp=oddnewnode;
//             }
//         }
//         temp=temp->next;
//         i++;
//     }
// }
// void display(struct node ** head){
//      struct node * temp=*head;
//      while(temp!=NULL){
//         printf("%d ",temp->data);
//         temp=temp->next;
//      }
// }
// void evendisplay(struct even ** evenhead){
//      struct even * temp=*evenhead;
//      while(temp!=NULL){
//         printf("%d ",temp->data);
//         temp=temp->next;
//      }
// }
// void odddisplay(struct odd ** oddhead){
//      struct odd * temp=*oddhead;
//      while(temp!=NULL){
//         printf("%d ",temp->data);
//         temp=temp->next;
//      }
// }

// int main(){
//  struct node *head = NULL;
// struct even *evenhead = NULL;
// struct odd *oddhead = NULL;

// createlist(&head,5);

// evenoddlist(&head,&evenhead,&oddhead);

// printf("Original:\n");
// display(&head);

// printf("\neven Position List:\n");
// evendisplay(&evenhead);

// printf("\nodd Position List:\n");
// odddisplay(&oddhead);
// }






#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


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

void evenoddlist(struct node **head,struct node ** evenhead ,struct node **oddhead)
{
        struct node * temp=*head;
        struct node * eventemp=NULL;
        struct node * oddtemp=NULL;

       
        int i=1;
        while(temp!=NULL){
            struct node * newnode=(struct node*)malloc (sizeof(struct node ));
            newnode->data=temp->data;
            newnode->next=NULL;
            if(i%2==0){
                if(*evenhead==NULL){
                    *evenhead=newnode;
                    eventemp=*evenhead;
                }
                else{
                    eventemp->next=newnode;
                    eventemp=newnode;
                }
            }
            else{
                if(*oddhead==NULL){
                    *oddhead=newnode;
                    oddtemp=*oddhead;
                }
                else{
                    oddtemp->next=newnode;
                    oddtemp=newnode;
                }
            }
            temp=temp->next;
            i++;
        }

}   
void display(struct node ** head){
     struct node * temp=*head;
     while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
     }
}

int main(){
    struct node*head=NULL;
    struct node*evenhead=NULL;
    struct node*oddhead=NULL;

    createlist(&head,5);
    display(&head);
    printf("\n");
    evenoddlist(&head,&evenhead,&oddhead);
    display(&evenhead);
    printf("\n");
    display(&oddhead);
   
}