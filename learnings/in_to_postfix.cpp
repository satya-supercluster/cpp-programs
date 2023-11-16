
#include<iostream>
#include<stack>
using namespace std;

string evaluate(string &s){
    stack<char> st;
    string ans;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='('){}
        else if(s[i]==')'){
            ans.push_back(st.top());
            ans.push_back(' ');
            st.pop();
        }
        else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^'  || s[i]=='%'){
            st.push(s[i]);
        }
        else{
            ans.push_back(s[i]);
            ans.push_back(' ');
        }
    }
    return ans;
}

int main(){
    string s;
    cout<<"Enter the infix expression(with priority brackets): ";
    getline(std::cin, s);
    string ans = evaluate(s);
    cout<<"The postfix expression for the same is: ";
    cout<<ans<<endl;
    return 0;
}
