#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int in,n,c=0,p=0;
    cin>>in;
    n=str.length();
    int d[n+10]={0};
    for(int i=0;i<n;i++){
        d[i]=str[n-1-i]-'0';
    }
    for(int i=0;i<n;i++){
        int temp=(d[i]*in+c);
        d[i]=temp%10;
        c=temp/10;
    }
    int i=n;
    while(c){
        d[i]=c%10;
        c/=10;
        i++;
    }
    for(int i=n+9;i>=0;i--){
        if(d[i]!=0) {p=i; break;}
    }
    i=p;
    while(i>=0){
        cout<<d[i];
        i--;
    }
    return 0;
}