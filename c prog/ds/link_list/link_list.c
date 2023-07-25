#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};

void printfunc(struct node* poti){
    while(poti!=NULL){
    printf("%d",poti->data);
    poti =poti->next;
    }
}

int main()
{
    struct node* head;
    struct node* second;
    struct node* third;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=7;
    head->next=second;
    
    second->data=8;
    second->next=third;
    
    third->data=9;
    third->next=NULL;
    
    printfunc(head);

// printf("");
    return 0;
}