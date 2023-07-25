#include <stdio.h>

struct node
{
    char data,
    struct node* next;
};

struct node* top=NULL;

void is_full(struct node* top){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        return 1;
    }
    else{return 0;}
}
void is_empty(struct node* top){
    if(top==NULL){
        return 1;
    }
    else{return 0;}
}

struct node* push(struct node* top,int data){
    if(is_full(top)){
        printf("its full");
    }
    else{
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->next=top;
        top=temp;
    }
    return top;
}

int pop(struct node* top){
    if(is_empty(top)){
        printf("its fkmpolmull");
    }
    else{
        struct node* temp=top;
        top=temp->next;
        free(temp);
        
    }
    
}


int main()
{
    
printf("");
    return 0;
}