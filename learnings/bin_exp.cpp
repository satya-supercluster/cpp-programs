#include<iostream>
using namespace std;
int power(int a,int b){
    int res=1;
    while(b){
        if(b&1) res*=a;
        a*=a;
        b/=2;
    }
    return res;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
    return 0;
}