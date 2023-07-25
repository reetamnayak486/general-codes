#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node *prev;
};
void push(struct node** href, int data){
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    new->prev=NULL;
    new->next=(*href);
    if(*(href)!=NULL){
        *(href)->prev=new;
    }
}

void reverse(struct node** href){
    struct node* temp=NULL;
    struct node* current=*(href);
    while(current!=NULL){
        temp=current->prev;
        current->prev=current->next;
        current->next=temp;
        current=current->prev;
    }

    if(temp!=NULL){
        *(href)=temp->prev;
    }
}
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
  push(&head,8);  
  push(&head,7);  
  push(&head,6);  
  push(&head,4);  
print(&head);
reverse(&head);
print(&head);
    return 0;
}