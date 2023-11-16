#include<iostream>
using namespace std;
template<class T>
struct node{
    T data;
    node* next;
};
template<class T>
class stack{
    private:
        node<T>* Top;
        int nodes_count;
    public:
        stack(){
            Top=NULL;
            nodes_count=0;
        }
        void push(T value){
                node<T>* cur=new node<T>();
                cur->data=value;
                cur->next=Top;
                Top=cur;
                nodes_count++;
        }
        T top(){
                return Top->data;
        }
        bool empty(){
            return Top==NULL;
        }
        void pop(){
            if(Top==NULL){
                cout<<"Stack is empty!"<<endl;
            }
            else{
                node<T>* cur=Top;
                Top=Top->next;
                delete(cur);
            }
        }
        int size(){
            return nodes_count;
        }
        void traverse(){
            if(Top==NULL){
                cout<<"Stack is empty!"<<endl;
                return;
            }
            node<T>* p=Top;
            while(p!=NULL){
                cout<<p->data<<" ";
                p=p->next;
            }
            cout<<endl;
        }
};
int main(){
    stack<int>s;
    int choose=0,value;
    while(choose!=5){
        cout<<"Enter the choice:\n1.Push\n2.Pop\n3.Top\n4.Traverse\n5.Exit\n";
        cin>>choose;
        switch(choose){
            case 1:
                cout<<"Enter the value: ";
                cin>>value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                if(s.empty()){
                    cout<<"Stack is Empty!"<<endl;
                }
                else
                    cout<<s.top()<<endl;
                break;
            case 4:
                s.traverse();
                break;
            case 5:
                break;
            default:
                cout<<"Invalid Choice!"<<endl;
        }
    }
    return 0;
}