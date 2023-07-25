#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* print_element(struct node *ptr){
    while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->next;
    }
}

struct node * insert_at_first(struct node* head, int data){
    struct node* ptr=(struct node*) malloc(sizeof(struct node*));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}

struct node * insert_at_index(struct node *head,int index,int data){
    struct node* p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i=i+1;
    }
    struct node* ptr=(struct node*) malloc(sizeof(struct node*));
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;

    return head;
}

struct node* insert_at_end(struct node *head,int data){
    struct node* p=head;
    struct node* ptr=(struct node*) malloc(sizeof(struct node*));
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    return head;

}

struct node* insert_at_node(struct node* third,int data){
    struct node* ptr=(struct node*) malloc(sizeof(struct node*));
    ptr->data=data;
    ptr->next=third->next;
    third->next=ptr;
}

int main()
{
  struct node*head;  
  struct node*second;  
  struct node*third;
  struct node*forth;

  head=(struct node*)malloc(sizeof(struct node));  
  second=(struct node*)malloc(sizeof(struct node));  
  third=(struct node*)malloc(sizeof(struct node));  
  forth=(struct node*)malloc(sizeof(struct node));  
// printf("");
    head->data=7;
    head->next=second;
    
    second->data=8;
    second->next=third;
    
    third->data=9;
    third->next=forth;
    
    forth->data=9;
    forth->next=NULL;

    print_element(head);
    // head=insert_at_first(head,56);
    // head=insert_at_index(head,3,45);
    // head=insert_at_end(head,34);
    insert_at_node(third,45);
    print_element(head);

    return 0;
}