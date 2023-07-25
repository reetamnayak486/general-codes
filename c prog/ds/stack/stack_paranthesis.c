#include <stdio.h>
#include <stdlib.h>
char arr[]="3*2-(8+1)";
int i=0;
struct stack *top=NULL;
char x;
struct stack{
    char data;
    struct stack* next;
};

int is_empty(struct stack* top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct stack* push(struct stack* top, char data){
    struct stack* ptr=(struct stack*)malloc(sizeof(struct stack));
    ptr->data=data;
    ptr->next=top;
    top=ptr;
    return top;
}

int pop(struct stack* top){
    struct stack* ptr=top;
    x=ptr->data;
    top=top->next;
    free(ptr);
    return x;
}

int main()
{
   
   while(arr[i]!='\0'){
    if(arr[i]=='('){
        top= push(top, arr[i]);
    }

    else if(arr[i]==')'){
        if(is_empty){
            printf("the equation is unbalanced");
        }
        else{
            printf("the %c has been popped",pop(top));
        }
    }
    i++;
   }
   if(is_empty){
    printf("thus the eqation is balanced");    
   }
   else{
    printf("its unbalanced");
   }
    return 0;
}