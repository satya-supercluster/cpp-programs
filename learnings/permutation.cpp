#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n==2||n==3){ cout<<"NO SOLUTION"<<endl;
    return 0;}
    else if(n==4) {
        cout<<"3 1 4 2"<<endl; return 0;
    }
    for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
    }
    for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
    }
    return 0;
}