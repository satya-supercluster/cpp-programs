#include<iostream>
using namespace std;
struct node{
        int data;
        node* left;
        node* right;
        node(int data){
            this->data=data;
            left=NULL;
            right=NULL;
        }
};
class BST{
    private: 
        node* root;
        node* insertion(node* f,int data){
            if(f==NULL){
                f=new node(data);
            }
            else if(f->data>=data){
                f->left=insertion(f->left,data);
            }
            else{
                f->right=insertion(f->right,data);
            }
            return f;
        }
        void inorder_traversal(node* f){
            if(f==NULL) return;
            inorder_traversal(f->left);
            cout<<f->data<<" ";
            inorder_traversal(f->right);
        }
        node* findMaxRight(node* f){
            if(f->right==NULL) return f;
            else return findMaxRight(f->right);
        }
        node* removal(node* f,int data){
            if(f!=NULL)
            if(f->data>data){
                f->left=removal(f->left,data);
            }
            else if(f->data<data){
                f->right=removal(f->right,data);
            }
            else{
                if(f->left==NULL&&f->right==NULL){
                    delete f;
                    f=NULL;
                }
                else if(f->left==NULL){
                    node* temp=f;
                    f=f->right;
                    delete temp;
                }
                else if(f->right==NULL){
                    node* temp=f;
                    f=f->left;
                    delete temp;
                }
                else{
                    node* temp=findMaxRight(f->left);
                    swap(f->data,temp->data);
                    delete temp;
                }
            }
            return f;
        }
        bool searching(node*f,int data){
            if(f==NULL) return false;
            if(f->data==data) return true;
            else if(f->data>data) return searching(f->left, data);
            else return searching(f->right,data);
        }
    public:
        BST(){
            root=NULL;
        }
        void insert(int data){
            root=insertion(root,data);
        }
        void inorder(){
            inorder_traversal(root);
        }
        void remove(int data){
            removal(root,data);
        }
        void search(int data){
            if(searching(root,data)){
                cout<<"Data found in BST"<<endl;
            }
            else cout<<"Data not found in BST"<<endl;
        }
};
int main(){
    BST obj;
    for(int i=0;i<5;i++){
        int x; cin>>x;
        obj.insert(x);
    }
    obj.inorder();
    cout<<endl;
    obj.remove(5);
    obj.inorder();
    cout<<endl;
    obj.search(7);
    return 0;
}