#include<iostream>
#include<stack>
using namespace std;
int calculator(char c,int a,int b){
    if(c=='+') return a+b;
    else if(c=='-') return a-b;
    else if(c=='/') return a/b;
    else if(c=='*') return a*b;
    else if(c=='%') return a%b;
    else if(c=='^') return a^b;
    return 0;
}
int main(){
    string str; cin>>str;
    stack<char> st;
    int ans=0;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='+'||str[i]=='-'||str[i]=='/'||str[i]=='*'||str[i]=='^'||str[i]=='%'){
            int a,b;
            a=int(st.top());
            st.pop();
            b=int(st.top());
            st.pop();
            ans+=calculator(str[i],a,b);
            st.push(char(ans));
        }
        else{
            st.push(str[i]);
        }
    }
    cout<<"Calculated result: "<<ans<<endl;
    return  0;
}