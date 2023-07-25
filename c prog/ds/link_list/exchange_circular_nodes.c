#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};

struct node *first_add(struct node* head,int data){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp=head;
    head->next=head;
    return head;
}

struct node* fill_empty(struct node* head, int data){
    if(head==NULL){
        first_add(head,data);
    }
    else{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->next=head->next;
        head->next=temp;
        return head;
    }

}

void transverse(struct node* head){
    struct node* p;

    if(head==NULL){
        printf("the list is empty");
    
    }
    else{
        p=head;
        do{
            printf("%d,",p->data);
            p=p->next;
        }while(p!=head);
    }
}

struct node *exchange(struct node* head){
    if(head->next->next==head){
        head=head->next;
        return head;
    }
    else{
        struct node* p;
        while(p->next->next!=head){
            p=p->next;
        }

        p->next->next=head->next;
        head->next=p->next;
        p->next=head;
        head=head->next;
        return head;
    }
}

int main()
{
    struct node *head=NULL;
    head=first_add(head,6);
    for(int i=0;i<5;i++){
        head=fill_empty(head,i);
    }
    transverse(head);
    exchange(head);
    transverse(head);
// printf("");
    return 0;
}