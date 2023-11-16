#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s;
    cin >> s;
    stack<char> st;
    for(int i=0; i<s.length();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.empty()){
                cout<<"Unbalanced"<<endl;
                return 0;
            }
            else st.pop();
        }
    }
    if(st.empty()){
    cout<<"Balanced"<<endl;
    }
    else cout<<"Unbalanced"<<endl;
    return 0;
}