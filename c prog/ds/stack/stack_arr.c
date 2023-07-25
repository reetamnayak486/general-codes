#include <stdio.h>
struct stack
{
    /* data */
    int top;
    int* arr;
    int size;
};

struct stack* is_full(struct stack* ptr){
    if(ptr->size==(ptr->top)+1){
        return 1;
    }
    else{
        return 0;
    }
} 
struct stack* is_empty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
} 

struct stack* push(struct stack *ptr,int data){
    if(is_full(ptr)){
        ptr->top++;
        ptr->arr[top]=data;
    }
    else{
        printf("the stack is full");
    }

}
struct stack* pop(struct stack *ptr){
    if(is_empty){
        int x= ptr->arr[top];
        ptr->top--;
        ptr->arr[ptr->top]=NULL;
    }
    else{
        printf("the stack is full");
    }

}


int main()
{   
    //we can appont direct s1 as an element of the structure .....but we use pointer to create
    //the s1 in heap so of efficient memory
    struct stack *s1= (struct stack*) malloc(sizeof(struct stack));   

    s1->size=7;
    s1->top=-1;
    s1->arr=(int *) malloc(s1->size*sizeof(int));
    push(s1,6);




// printf("");
    return 0;
}