#include<iostream>
using namespace std;
int main(){
    int a,b; cin>>a>>b;
    int n; cin>>n;
    if(n&1){
        cout<<(n/2+1)*a-(n/2)*b<<endl;
    }
    else{
        cout<<(n/2)*a-(n/2)*b<<endl;
    }
    return 0;
}