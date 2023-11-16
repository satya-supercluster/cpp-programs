#include<iostream>
#include<queue>
using namespace std;
template <class T>
class stack{
    private:
        queue<T> q;
    public:
        void push(T data){
            q.push(data);
        }
        void pop(){
            int size=q.size();
            while(size!=1){
                q.push(q.front());
                q.pop();
                size--;
            }
            q.pop();
        }
        T top(){
            int size=q.size();
            while(size!=1){
                q.push(q.front());
                q.pop();
                size--;
            }
            T ans=q.front();
            q.push(q.front());
            q.pop();
            return ans;
        }
        int empty(){
            return q.empty();
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
                // if(s.empty()){
                //     cout<<"Stack is Empty!"<<endl;
                // }
                // else
                // s.traverse();
                break;
            case 5:
                break;
            default:
                cout<<"Invalid Choice!"<<endl;
        }
    }
    return 0;
}