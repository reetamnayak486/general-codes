#include <stdio.h>

struct stack{
    int data;
    struct stack* next;
    
};

struct stack* push(struct stack* head,int data){
    struct stack* ptr=(struct stack*) malloc(sizeof(struct stack));
    ptr->data=data;
    ptr->next=head;
    head=ptr;
    top=&

    return head;
}

int main()
{
    struct stack* head;
    struct stack* top
    head= NULL;
    top= NULL;
    push(head,45);
    push(head,5);
    push(head,4);

printf("");
    return 0;
}