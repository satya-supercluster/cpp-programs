#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *left,*right;
};
 node* newnode(int data){
        node* root=new node;
        root->data=data;
        root->left=NULL;
        root->right=NULL;
        return root;
    }
int main(){
    node *root=newnode(1);
    root->left=newnode(3);
    root->right=newnode(2);
    root->left->right=newnode(5);
    cout<<root->left->right->data;
    return 0;
}