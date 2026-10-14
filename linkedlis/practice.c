// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
//     int data;
//     struct node * next;
// };

// void createlist(struct node ** head,int n){
//     struct node * temp=NULL;
    
//     for(int i =0;i<n;i++){
//         struct node * newnode =(struct node*)malloc (sizeof(struct node));
//         int x;
//         printf("enter the %d node ",i+1);
//         scanf("%d",&newnode->data);
//         newnode->next=NULL;

//         if(*head==NULL){
//             *head=newnode;
//             temp=*head;
//         }
//         else{
//             temp->next=newnode;
//             temp=temp->next;
//         }
//     }
// }
// void insertatbegin(struct node** head){
//     struct * newnode = (struct node*)malloc(sizeof(struct node));
//     int x;
//     printf("enter the value you want to isert at the start : ");
//     scanf("%d",&newnode->data);
//     newnode->next=NULL;

//     newnode->next=*head;
//     *head=newnode;

// }
// void insertatend(struct node ** head){
//     struct * newnode = (struct node*)malloc(sizeof(struct node));
//         int x;
//     printf("enter the value you want to isert at the end: ");
//     scanf("%d",&newnode->data);
//     newnode->next=NULL;
//     struct node * temp=*head;

//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=newnode;
// }
// void insertatanypos(struct node ** head){
//         struct * newnode = (struct node*)malloc(sizeof(struct node));
//         int x;
//     printf("enter the value you want to isert at the desired postiton : ");
//     scanf("%d",&newnode->data);
//     newnode->next=NULL;
//     struct node * temp=*head;
//     while(temp!=NULL){
//         temp=temp->next;
//         count++;
//     }
//     int pos;
//     printf("now enter the position : ");
//     scanf("%d",&pos);
//     if(pos>count){
//         printf("enter a valid position : ");
//         return;
//     }
//     else{
//         int i =1;
//         temp=*head;
//         while(i<pos-1){
//             temp=temp->next;
//         }
//         newnode->next=temp->next;
//         temp->next=newnode;
//     }
// }
// void deletefrombeg(struct node ** head){
//     if(*head==NULL) return;
//     if(*head->next=NULL) {
//         *head=NULL;
//         return;
//     }
//     struct node * temp=*head;
//     *head=(*head)->next;
//     free(temp);
// }
// void deletefromend(struct node ** head){
//     if(*head==NULL) return;
//         struct node * temp=*head;
//         struct prevnode * temp=*head;

//     while(temp->next!=NULL){
//         temp=temp->next;
//         prevnode=temp;
//     }
//     prevnode-next=NULL;
//     free(temp);
// }
// void deletefromanypos(struct node ** head){
//     if(*head==NULL)return;
//     if(*head->next==NULL){
//         deletefrombegin(&head);
//     }
//     struct node*temp=*head;
//    while(temp!=NULL){
//         temp=temp->next;
//         count++;
//     }
//     int pos;
//     printf("now enter the position : ");
//     scanf("%d",&pos);
//     if(pos>count){
//         printf("enter a valid position : ");
//         return;
//     }
//     else{
//         temp=*head;
//         int i=1;
//         while(i<pos-1){
//             temp=temp->next;
//         }
//         struct node * nextnode=NULL;
//         nextnode=temp->next;
//         temp->next=nextnode->next;
//         free(nextnode);
//     }

// }
// void length(struct node ** head){
//     struct node * temp=*head;
//     int count=0;
//     while(temp!-NULL){
//         temp=temp->next;
//         count++;
//     }
//     printf("llength of the linked list is : %d",count);
// }
// void reverse(struct node * head1){
//     struct node * current=head1;
//     struct node * nextnode=head1;
//     struct node * prevnode=NULL;

//     while(nextnode!=NULL){
//         nextnode=nextnode->next;
//         current->next=prevnode;
//         prevnode=current;
//         current=nextnode;
//     }
//     head1=prevnode;
// }
// deletemultipleofk(struct node **head){
//     int k ;
//     printf("enter the number of which multiples u want to delete : ");
//     scanf("%d",&k);
//     struct node * temp = *head;
// struct node * prevnode=temp;

// while(temp!=NULL ){

//     if((temp->data)%k==0){
//         if(temp==*head){
//             struct node * free=*head;
//             *head=(*head)->next;
//             temp=*head;
//             free(free);
//         }
//         else{
//             struct node * free=temp;
//             prevnode->next=temp->next;
//             temp=temp->next;
//             free(free);
//         }
//     }
//     else{
//   prevnode=temp;
//     temp=temp->next;
//     }
  
    
// }
// }
// int isprime(int k){
//     if(k<2){
//         return -1;
//     }
//     for(int i =2;i<n;i++){
//         if(n%i == 0) return -1;
//     }
//     return 1;
// }
// void deleteprimenodes(struct node ** head){
//     struct node * temp = *head;    
//     if(isprime(temp->data)==1){
//         if(temp==*head){
//             struct node * del=temp;
//             *head=(*head)->next;
//             temp=head;
//             free(del);
//         }
//         else{
//             struct node * del= temp;
//             prevnode->next=temp->next;
//             temp=temp->next;
//             free(del);
//         }

//     }
//     else{
//         prevnode=temp;
//         temp=temp->next;
//     }
// }
// void maxmin(struct node * temp){
//     struct node * temp = *head;

//     int maxi=INT_MIN;
//     int mini=INT_MAX;

//     while(temp!=NULL){
//         if(temp->data>maxi){
//             maxi=temp->data;
//         }
//         if(temp->data<mini){
//             mini=temp->data;
//         }
//         temp=temp->next;
//     }
// }
// void insertformergrelist(struct node ** head3,int x){
//     struct node * newnode = (struct node*)malloc(sizeof(struct node));
//     newnode->data=x;
//     newnode->next=NULL;
//     struct node * temp = *head3;
//     if(*head3==NULL){
//         *head3=newnode;
//     }
//     else{
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         temp->next=newnode;
//     }
// }
// void mergelist(struct node ** head1,struct node **head2,struct node **head3){
//     struct node * temp1=*head1;
//     struct node * temp2=*head2;

//     while(temp1!=NULL && temp2!=NULL){
//         if(temp1->data <= temp2->data){
//              insertformergrelist(head3,temp->data);
//             temp1=temp1->next;
//         }
//         else{
//             insertformergrelist(head3,temp->data);
//             temp2=temp2->next;
//         }
//     }
//     while(temp1!=NULL){
//         insertformergrelist(head3,temp->data);
//         temp1=temp1->next;
//     }
//     while(temp2!=NULL){
//         insertformergrelist(head3,temp->data);
//         temp2=temp2->next;
//     }
// }
// void sort(struct node ** head){
//     struct node * i = *head;
//     struct node * j = NULL;
//     int temp;
//     while(i!=NULL){
//         j=head;
//         while(j!=NULL){
//             if(j->data> j->next->data){
//                 temp=j->data;
//                 j->data=j->next->data;
//                 j->next->data=temp;
//             }
//             j=j->next;
//         }
//         i=i->next;
//     }
// }
// void reversefromhalf(struct node ** head){
//     struct node * fast=*head;
//     struct node * slow=*head;
//     while(fast->next!=NULL && fast!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     struct node * current = slow->next;
//     struct node * nextnode = slow->next;
//     struct node * prev =NULL;

//     while(nextnode!=NULL){
//         nextnode=nextnode->next;
//         current->next=prev;
//         prev=current;
//         current=nextnode;
//     }
//     slow->next=prev;

// }
// void display(struct node ** head){
//      struct node * temp=*head;
//      while(temp!=NULL){
//         printf("%d ",temp->data);
//         temp=temp->next;
//      }
//      printf("\n");
// }
// void searchelement(struct node ** head){
//     int check =-1;
//     int target ;
//     printf("enter the element u want to search : ");
//     struct node * temp =*head;
//     while(temp !=NULL){
//         if(temp->data==target){
//             check = 1;
//             break;
//         }
//     }
// if(check == -1) printf("not found");
// else printf("found");
// }

// void reverse(struct node **head){
//     struct node *nextnode=*head;
//     struct node *current=*head;
//     struct node *prev=NULL;

//     while(nextnode!=NULL){
//         nextnode=nextnode->next;
//         current->next=prev;
//         prev=current;
//         current=nextnode;
//     }
//     *head=prev;

// }
// void sort(struct node **head){
//     struct node * i=*head;
//     struct node * j=NULL;
//     while (i!=NULL)
//     {
//         j=*head;
//         while (j->next!=NULL) 
//         {
//             if(j->data>j->next->data){
//                 int temp = j->data;
//                 j->data=j->next->data;
//                 j->next->data=temp;
//             }
//             j=j->next;

//         }
//         i=i->next;
        
//     }
    
// }
// void swapadjacentnodes(struct node **head){
//     struct node * first=*head;
//     struct node * prev=NULL;

//     (*head)=first->next;
//     while(first!=NULL && first->next!=NULL){
//         struct node * second = first->next;
//         first->next=second->next;
//         second->next=first;

//         if(prev !=NULL){
//             prev->next=second;
//         }
//         prev=first;
//         first=first->next;
//     }

// }
// void swapadjacentdata(struct node **head){
//     struct node * temp = *head;

//     while(temp!=NULL && temp->next!=NULL){
//         int x = temp->data;
//         temp->data=temp->next->data;
//         temp->next->data=x;
//         temp=temp->next->next;
//     }
// }
// void evenoddlist(struct node **head,struct node **evenhead, struct node **oddhead){
//     struct node * temp =*head;
//     struct node * eventemp =*evenhead;
//     struct node * oddtemp =*oddhead;

//     int i =1;
//     while(temp!=NULL){
//         struct node * newnode=(struct node*)malloc (sizeof(struct node));
//         newnode->data=temp->data;
//         newnode->next=NULL;
//         if(i%2==0) {
//             if(*evenhead==NULL){
//                 *evenhead=newnode;
//                 eventemp=*evenhead;
//             }
//             else{
//                 eventemp->next=newnode;
//                 eventemp=newnode;
//             }
//         }
//         else{
//             if(*oddhead==NULL){
//                 *oddhead=newnode;
//                 oddtemp=*oddhead;
//             }
//             else{
//                 oddtemp->next=newnode;
//                 oddtemp=newnode;
//             }
//         }
//         temp=temp->next;
//         i++;
//     }   
// }
// void removeduplicate(struct node **head){
//     struct node * temp = *head;
//     while (temp!=NULL && temp->next!=NULL)
//     {
//         if(temp->data==temp->next->data){
//             struct node * del=temp->next;
//             temp->next=del->next;
//             free(del);
//         }
//         else{
//             temp=temp->next;

//         }
//     }
    
// }
// int main(){
//     struct node * head=NULL;
//     struct node * evenhead=NULL;
//     struct node * oddhead=NULL;
//     createlist(&head,5);
//    //evenoddlist(&head,&evenhead,&oddhead);
//     //reversefromhalf(&head);
//     //reverse(&head);
//    // sort(&head);
//   // swapadjacentnodes(&head); 
//  // swapadjacentdata(&head); 
// //  display(&head);
// //   display(&evenhead);
// //   display(&oddhead);
//     removeduplicate(&head);
//     display(&head);
//     //searchelement(&head);
//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * next;
};

void createlist(struct node ** head,int n){
    struct node * temp=NULL;
    for (int i = 0; i < n; i++)
    {
        struct node * newnode=(struct node*) malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(*head==NULL){
            *head=newnode;
            temp=*head;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }

    }
    
}
void deleteduplicatesorted(struct node **head){
    struct node * temp=*head;
    while(temp !=NULL && temp->next!=NULL){
        if(temp->data==temp->next->data){
            struct node * del= temp->next;
            temp->next=del->next;
            free(del);
        }
        else {
            temp=temp->next;
        }
    }
}
void removeduplicatedUNsorted(struct node **head){
    struct node * current =*head;
    struct node * temp=NULL;
    while(current != NULL && current->next!=NULL){
        temp=current;
        while(temp->next!=NULL){
            if(current->data==temp->next->data){
                struct node * del=temp->next;
                temp->next=del->next;
                free(del);
            }
            else{
                temp=temp->next;
            }
        }
        current=current->next;
    }
}
void display(struct node **head){
    struct node * temp=*head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void sort(struct node ** head){
    struct node * i=*head;
    struct node * j = NULL;

    while(i!=NULL){
        j=*head;
        while(j->next!=NULL){
            if(j->data>j->next->data){
                int temp =j->data;
                j->data=j->next->data;
                j->next->data=temp;
                
            }
            j=j->next;
        }
        i=i->next;
    }

}


void ispalnedrome(struct node **head){
    struct node * slow=*head;
    struct node * fast=*head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    struct node * nextnode=slow;
    struct node * current=slow;
    struct node * prev=NULL;

    while(nextnode!=NULL){
        nextnode=nextnode->next;
        current->next=prev;
        prev=current;
        current=nextnode;
    }   

    struct node * p1=*head;
    struct node * p2=prev;

    while(p2!=NULL){
        if(p1->data!=p2->data){
            printf("not planedrome");
            break;;
        }
        else {
            p1=p1->next;
            p2=p2->next;

        }

    }
    printf("planedrome");
}
int main(){
    struct node * head=NULL;
    createlist(&head,4);
   // deleteduplicatesorted(&head);
  // removeduplicatedUNsorted(&head);
  
    ispalnedrome(&head);
  //ort(&head);
    display(&head);
    return 0;
}