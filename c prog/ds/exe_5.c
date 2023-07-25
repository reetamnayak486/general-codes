#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* left; 
    struct node* right; 
}

struct node* create_node(int data){
    struct node* n= (struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
}

void post_order(struct node* root){
    if(root!=NULL){
    post_order(root->left);
    post_order(root->right);
    printf("%d",root->data);
    }
}
void pre_order(struct node* root){
    if(root!=NULL){
    printf("%d",root->data);
    pre_order(root->left);
    pre_order(root->right);
    }
}
void in_order(struct node* root){
    if(root!=NULL){
    in_order(root->left);
    printf("%d",root->data);
    in_order(root->right);
    }
}

int main()
{
    struct node* root=create_node(4);
    struct node* p1=create_node(1);
    struct node* p2=create_node(6);
    struct node* p3=create_node(5);
    struct node* p4=create_node(2);

    root->left=p1;
    root->right=p2;
    p1->left=p3;
    p1->right=p4;

    post_order(root);
    pre_order(root);
    in_order(root);

    return 0;
}