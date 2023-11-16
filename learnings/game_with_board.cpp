#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        if(n%5!=0){
            if((n/5)%2==0){
                cout<<"Bob"<<endl;
            }
            else cout<<"Alice"<<endl;
        }
        else{
            if((n/5)%2==0){
                cout<<"Alice"<<endl;
            }
            else cout<<"Bob"<<endl;
        }
    }
    return 0;
}