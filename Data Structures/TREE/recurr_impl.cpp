#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class node{
    public: 
        int data;
        node* left;
        node* right;
        node(int x){
            this->data=x;
            left=NULL;
            right=NULL;
        }  
};
node* buildTree(node * root){
    cout<<"Enter the element: ";
    int data;
    cin>>data;
    if(data==-1) return NULL;
    root=new node(data);
    cout<<"Enter the data in left: "<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data in right: "<<endl;
    root->right=buildTree(root->right);
    return root;
}
void inorder(node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void levelorder(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            if(!q.empty()) {
                q.push(NULL);
                cout<<'\n';
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
    }
}
void revlevelorder(node* root){
    queue<node*> q;
    stack<node*> s;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            if(!q.empty()) q.push(NULL);
        }
        else{
            if(temp->right)
            q.push(temp->right);
            if(temp->left)
            q.push(temp->left);
        }
        s.push(temp);
    }
    while(!s.empty()){
        if(s.top()!=NULL)
        cout<<s.top()->data<<" ";
        else cout<<endl;
        s.pop();
    }
}
node* buildByLevelOrder(node*root){
    cout<<"Enter the data: ";
    int data;
    cin>>data;
    
}
int main(){
    node* root; //1 3 7 -1 -1 9 -1 -1 5 11 -1 -1 -1
    root=buildTree(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    levelorder(root);
    revlevelorder(root);
    cout<<endl;
    return 0;
}