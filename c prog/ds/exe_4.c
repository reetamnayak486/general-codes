#include <stdio.h>

struct node
{
    int data,
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

int p_match(char arr[100]){
    for (int i = 0; i < sizeof(arr); i++)
    {
        if(arr[i]=='('){
            push(top,'(')
        }
        else{
            if(is_empty(top)){
                return 0;
            }
            else{
                pop(top);
            }
        }
    }

    if(is_empty){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    char arr[]="($*34855)"
    p_match(arr);

}