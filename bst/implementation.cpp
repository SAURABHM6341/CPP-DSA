#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int n){
        this->data = n;
        this->left = NULL;
        this->right= NULL;
    }
};
Node*constructbst(Node*root,int n){
    if(root==NULL){
        root = new Node(n);
        return root;
    }
    if(n>root->data){
        root->right = constructbst(root->right,n);
    }
    else{
        root->left = constructbst(root->left,n);
    }
    return root;
}
void inordertraversal(Node *root)
{
    if (root == NULL)
        return;
    inordertraversal(root->left);
    cout << root->data << " ";
    inordertraversal(root->right);
}
Node* insertinbst(Node*root,int value,Node*temp){
    if(temp==NULL)
    return temp;
if(temp->data>value){
    if(temp->left){
        temp = insertinbst(root,value,temp->left);
    }
    else{
        Node*newnode = new Node(value);
        temp->left = newnode;
        return temp;
    }
}
else
{
    if(temp->right){
        temp = insertinbst(root,value,temp->right);
    }
    else{
        Node*newnode = new Node(value);
        temp->right = newnode;
        return temp;
    }
}
return root;

}
void ispresent(Node*root,int value){
if(root==NULL){
    cout<<"NOT FOUND\n";
    return ;
}
if(root->data==value){
    cout<<endl<<root->data<<endl;
    cout<<"ELEMENT FOUND\n";
    return;
}
if(value>root->data){
    ispresent(root->right,value);
}
if(value<root->data){
    ispresent(root->left,value);
}
}
int findmin(Node*root){
while (root->left!=NULL)
{
    root =root->left;
}
return root->data;
}
int findmax(Node*root){
while (root->right!=NULL)
{
    root =root->right;
}
return root->data;
}
Node*findmax1(Node*root){
   while (root->right!=NULL)
{
    root =root->right;
}
return root;
}
Node*deletefrombst(Node*root,int value){
if(root==NULL){
    return root;
}
if(root->data==value){
if(root->left==NULL&&root->right==NULL){
    delete(root);
    return NULL;
}
else if((root->left==NULL&&root->right!=NULL)||(root->left!=NULL&&root->right==NULL)){
    Node*temp  =root;
    if(root->left){
        temp = root->left;
    }
    else{
        temp = root->right;
    }
    delete(root);
    return temp;
}
else{
Node*temp = findmax1(root->left);
root->data = temp->data;
root->left = deletefrombst(root->left,root->data);
return root;
}
}
else if(root->data>value){
    root->left  = deletefrombst(root->left,value);
    return root;
}
else{
    root->right = deletefrombst(root->right,value);
    return root;
}
}
int main()
{
    
    Node*root = NULL;
    int data;
    cin>>data;
    while(data!=-1){
    root = constructbst(root,data);
    cin>>data;
    }
    inordertraversal(root);
    cout<<"\nenter the value to be inserted\n";
    int value;
    cin>>value;
    root = insertinbst(root,value,root);
    inordertraversal(root);
    cout<<endl<<"enter the value to be searched\n";
    int search;
    cin>>search;
    ispresent(root,search);
    cout<<"min value = "<<findmin(root);
    cout<<endl;
    cout<<"max value = "<<findmax(root);
    cout<<endl;
    cout<<"enter the value to be deleted\n";
    cin>>value;
    root = deletefrombst(root,value);
    inordertraversal(root);
    return 0;
};
