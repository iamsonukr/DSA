#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*left;
    struct node*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
}; 
node* buildtree(int preorder[],int inorder[],int start,int end){
    static int idx=0;
    int curr=preorder[idx];
    idx++;
    node* node=new node(curr);
    
}


void preorder(struct node* root){
    if(root==NULL){
        return;
    }
    else
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
};
void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    


// }

int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->left=new node(2);
    root->left->left=new node(5);
    root->right->right=new node(5);
    preorder(root);
    int preorder[]={1,2,4,3,5}
    int inorder[]={4,2,1,5,3}
    return 0;
}