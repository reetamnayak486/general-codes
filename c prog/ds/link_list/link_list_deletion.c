#include <stdio.h>
#include <stdlib.h>
int i=0;
struct node
{
    int data;
    struct node* next;
};

void printfunc(struct node* poti){
    while(poti!=NULL){
    printf("%d\n",poti->data);
    poti =poti->next;
    }
}

struct node * delete_first_node(struct node *head){
    struct node* ptr=head;
    head=ptr->next;
    free(ptr);
    return head;
}

struct node* delete_at_index(struct node* head,int index){
    struct node* p=head;
    while (i!=index-1)
    {
       p=p->next;
       i++;
    }
    struct node*q=p->next;
    p->next=q->next;
    free(q);
    return head;
}

struct node * delete_last_node(struct node* head){
    struct node *p=head;
    struct node *q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;

}

struct node * delete_at_value(struct node* head,int value){
    struct node* p=head;
    struct node* q=head->next;
    while(q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* forth;
    struct node* five;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    forth=(struct node*)malloc(sizeof(struct node));
    five=(struct node*)malloc(sizeof(struct node));

    head->data=7;
    head->next=second;
    
    second->data=8;
    second->next=third;
    
    third->data=9;
    third->next=forth;
    
    forth->data=5;
    forth->next=five;
    
    five->data=10;
    five->next=NULL;
    
    printfunc(head);
    // head=delete_first_node(head);
    // head=delete_at_index(head,3);
    // head=delete_last_node(head);
    head=delete_at_value(head,50);
    // printf("\n");
    printfunc(head);
// printf("");
    return 0;
}