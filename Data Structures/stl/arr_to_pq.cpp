#include<iostream>
#include<algorithm>
using namespace std;
template<class T,int size>
class priority_queue{
    private:
        T arr[size];
        int t=-1;
    public:
        void push(T a){
            if(t==size-1){
                cout<<"ERROR:PriorityQueue is full!"<<endl;
                return;
            }
            arr[t+1]=a;
            t++;
            sort(arr,arr+t+1);
        }
        T front(){
            if(t==-1){
                cout<<"ERROR:PriorityQueue is empty!"<<endl;
            }
            else{
                return arr[t];
            }
        }
        bool empty(){
            if(t==-1) return true;
            else return false;
        }
        void pop(){
            if(t==-1){
                cout<<"ERROR:PriorityQueue is empty!"<<endl;
                return;
            }
            else{
                t--;
            }
        }
};
int main(){
    priority_queue<int,6> st;
    st.push(10);
    st.push(5);
    st.push(1);
    st.push(15);
    st.push(15);
    st.push(105);
    while(!st.empty()){
        cout<<st.front()<<" ";
        st.pop();
    }
    return 0;
}