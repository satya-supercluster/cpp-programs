#include<iostream>
using namespace std;
template<class T,int size>
class stack{
    private:
        T arr[size];
        int t=-1;
    public:
        bool empty(){
            if(t==-1) return true;
            else return false;
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
            t--;
        }
};
int main(){
    stack<int,5> st;
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