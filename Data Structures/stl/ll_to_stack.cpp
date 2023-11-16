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
        node<T>* Top=NULL;
    public:
        void push(T value){
                node<T>* cur=new node<T>();
                cur->data=value;
                cur->next=Top;
                Top=cur;
        }
        T top(){
            if(Top==NULL){
                cout<<"Stack is empty!"<<endl;
            }
            else{
                return Top->data;
            }
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
};
int main(){
    stack<int> st;
    st.push(10);
    st.push(5);
    st.push(1);
    st.push(15);
    st.push(15);
    st.push(105);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}