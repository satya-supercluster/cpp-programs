#include<iostream>
#include<queue>
using namespace std;
template <class T>
class stack{
    private:
        queue<T> q1;
        queue<T> q2;
        int q;
    public:
        stack(){
            q=1;
        }
        void push(T data){
            if(q==1){
                q1.push(data);
            }
            else{
                q2.push(data);
            }
        }
        void pop(){
            if(q==1){
                while(q1.size()!=1){
                    q2.push(q1.front());
                    q1.pop();
                }
                q1.pop();
                q=2;
            }
            else{
                while(q2.size()!=1){
                    q1.push(q2.front());
                    q2.pop();
                }
                q2.pop();
                q=1;
            }
        }
        T top(){
            if(q==1){
                while(q1.size()!=1){
                    q2.push(q1.front());
                    q1.pop();
                }
                q=2;
                T ans= q1.front();
                q2.push(q1.front());
                q1.pop();
                return ans;
            }
            else{
                while(q2.size()!=1){
                    q1.push(q2.front());
                    q2.pop();
                }
                T ans= q2.front();
                q1.push(q2.front());
                q2.pop();
                q=1;
                return ans;
            }
        }
        int size(){
            if(q==1){
                return q1.size();
            }
            else{
                return q2.size();
            }
        }
        int empty(){
            if(q==1){
                return q1.size()==0;
            }
            else{
                return q2.size()==0;
            }
        }
        void traverse(){
            if(q==1){
                while(q1.size()){
                    q2.push(q1.front());
                    cout<<q1.front()<<" ";
                    q1.pop();
                }
                q=2;
            }
            else{
                while(q2.size()){
                    q1.push(q2.front());
                    cout<<q2.front()<<" ";
                    q2.pop();
                }
                q=1;
            }
            cout<<endl;
        }
};


int main(){
    stack<int> s;
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
                if(s.empty()){
                    cout<<"Underflow!!!"<<endl;
                }
                else
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
                if(s.empty()){
                    cout<<"Stack is Empty!"<<endl;
                }
                else
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