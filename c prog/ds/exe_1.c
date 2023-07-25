struct node* inorder_predecessor(struct node* root){
    root=root->left;
    while(root!=NULL){
        root=root->right;
    }
    return root;
}

void delete_node(struct node* root,int value){
    static struct node* iprd=NULL;
    if(root==NULL){
        return NULL;
    }
    if(root->right==NULL && root->left==NULL){
        free(root);
        return NULL;
    }

    if(value<root->data){
        root->left=delete_node(root->left,value);
    }
    else if(value>root->data){
        root->right=delete_node(root->right,value);
    }
    else{
        iprd=inorder_predecessor(root);
        root->data=iprd->data;
        root->left=delete_node(root->left,iprd->data)
    }


}