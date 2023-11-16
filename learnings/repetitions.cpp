#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0,max=1;
    char p=s[0];
    for(int i=0;i<s.length();i++){
        if(s[i]==p){
            c++;
        }
        else if(s[i]!=p||i==s.length()-1){
            if(c>max) max=c;
            c=1;
            p=s[i];
        }
    }
    if(s[s.length()-1]==s[s.length()-2]){
        if(c>max) max=c;
    }
    cout<<max<<endl;
    return 0;
}