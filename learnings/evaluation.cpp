#include<iostream>
#include<stack>
using namespace std;

int operations(int a,int b,char c){
    switch(c){
        case '+':
            return a+b;
            break;
        case '-':
            return a-b;
            break;
        case '*':
            return a*b;
            break;
        case '/':
            return a/b;
            break;
        case '%':
            return a%b;
            break;
    }
    return 0;
}

int evaluate(string s){
    stack<int> st;
    int k=0;
    s.push_back(' ');
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            string t;
            for(int j=k;j<i;j++){
                t.push_back(s[j]);
            }
            if(t=="+" || t=="-" || t=="*" || t=="/" || t=="^"  || t=="%"){
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                int ans = operations(a,b,t[0]);
                st.push(ans);
            }
            else{
                int p=stoi(t);
                st.push(p);
            }
            k=i+1;
        }
    }
    return st.top();
}
int main()
{
    string s;
    cout<<"Enter the postfix expression(Each operator or operand should be space seperated): ";
    getline(std::cin, s);
    int ans;
    ans=evaluate(s);
    cout<<"Evalution Result: "<<ans<<endl;
    return 0;
}