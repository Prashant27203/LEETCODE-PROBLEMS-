Node * inSucc(Node * root){
    Node * temp=root->right;
    while(temp->left!=NULL)
        temp=temp->left;
    return temp;
}

// Function to delete a node from BST.
Node *deleteNode(Node *root, int X) {
    if(root==NULL)
        return root;
    if(X < root->data)
        root->left=deleteNode(root->left,X);
    if(X > root->data)
        root->right=deleteNode(root->right,X);
    else{
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        
        if(root->left==NULL){
            Node * temp= root->right;
            delete root;
            return temp;
        }
        if(root->right==NULL){
            Node * temp= root->left;
            delete root;
            return temp;
        }
        
        Node * temp=inSucc(root);
        root->data=temp->data;
        root->left=deleteNode(root->left,temp->data);
    }
    return root;
}