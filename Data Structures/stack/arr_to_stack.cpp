#include<iostream>
using namespace std;
template<class T>
class stack{
    private:
        T* arr;
        int size;
        int t=-1;
    public:
        stack(int i){
            t=-1;
            size=i;
            arr=new T[size];
        }
        bool empty(){
            if(t==-1) return true;
            else return false;
        }
        bool isFull(){
            if(t==size-1) return true;
            else false;
        }
        void push(T val){
            if(t==size-1) {cout<<"OverFlow"<<endl;return;}
            arr[t+1]=val;
            t++;
        }
        T top(){
            return arr[t];
        }
        void pop(){
            if(t==-1){
                cout<<"Underflow"<<endl; return;
            }
            t--;
        }
        void traverse(){
            if(t==-1){
                cout<<"Stack is empty"<<endl; return;
            }
            for(int i=t;i>=0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};
int main(){
    int size;
    cout<<"Enter the size of the stack: ";
    cin>>size;
    stack<int> s(size);
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