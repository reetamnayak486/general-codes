#include <stdio.h>
#include <stdlib.h>
int bf=0;

struct node{
    int data;
    struct node left;
    struct node right;
    int height;
}

struct node* create_node(int data){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    temp->height=1;
    return temp;
}

int get_height(struct node* n){
    if(n==NULL){
        return 0;
    }
    return n->height;
}

int balance_factor(struct node* n){
    return get_height(n->left)-get_height(n->right);
}

struct node* right_rotate(struct node* y){
    struct node* x=y->left;
    struct node* T2=x->right;

    x->right=y;
    y->left=T2;

    x->height=max(get_height(x->height),get-=height(x->height)) +1;
    y->height=max(get_height(y->height),get->height(y->height)) +1;

    return x;
}
struct node* left_rotate(struct node* x){
    struct node* y=x->right;
    struct node* T2=y->left;

    y->left=x;
    x->right=T2;

    x->height=max(get_height(x->height),get-=height(x->height)) +1;
    y->height=max(get_height(y->height),get->height(y->height)) +1;

    return y;
}

struct node* insert(struct node* root,int data){
    if(root==NULL){
        return create_node(data);
    }

    if(data==root->data){
        printf("the value already exists");
        return 0;
    }
    else if(data<root->data){
        root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }

    root->height=1+max(get_height(root->left),get_height(root->right));
    bf=balance_factor(root);

    //ll rotation
    if(bf>1 && data<root->left->data){
        return right_rotate(root);
    }
    //rr rotation
    else if(bf<-1 && data>root->right->data){
        return left_rotate(root);
    }
    //rl rotation
    else if(bf<-1 && data<root->right->data){
        root->right= return right_rotate(root->right);
        return left_rotate(root);
    }
    //lr rotation
    else(bf>1 && data>root->left->data){
        root->left= return left_rotate(root->left);
        return right_rotate(root);
    }
    return root;
    
}

int pre_order(struct node* root){
    if(root==NULL){
        return 0;
    }
    printf("%d", root->data);
    pre_order(root->left);
    pre_order(root->right);
}

int main()
{
   struct node* root=NULL;

   root=insert(root,22); 
   root=insert(root,2); 
   root=insert(root,6); 
   root=insert(root,4); 
   root=insert(root,3); 
   root=insert(root,10);

   pre_order(root); 

    return 0;
}