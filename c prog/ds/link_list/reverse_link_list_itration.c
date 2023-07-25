#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node *prev;
};
    struct node* prev=NULL;
    struct node* next=NULL;

struct node* first_node(struct node** href, int data){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=*(href);
    *(href)=temp;
    
}

// void reverse(struct node** href){
//     struct node* prev=NULL;
//     struct node* next=NULL;
//     struct node* current=*(href);

//     while(current!=NULL){
//         next= current->next;
//         current->next=prev;
//         prev=current;
//         current=next;
//     }
//     *(href)=prev;

// }
int recur_reverse(struct node** href){
    struct node* current=*(href);
        if(current==NULL){
            return 0;
        }        
        next= current->next;
        current->next=prev;
        prev=current;
        current=next;
        *(href)=prev;
        recur_reverse(&(*(href)));
}
// struct node* add_rest(struct node** href, int data){
//     struct node* temp=(struct node*)malloc(sizeof(struct node));
//     temp->data=data;
//     temp->next=*(href);

// }
void print(struct node**href){
    struct node*ptr=*href;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
  struct node* head=NULL;
  for(int i=1;i<6;i++){
  first_node(&head,i); 
  }
    print(&head);
    int y=recur_reverse(&head);
    printf("\n");
    print(&head);
    return 0;
}