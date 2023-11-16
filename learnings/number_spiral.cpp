#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long x,y;
        long long base;
        cin>>y>>x;
        if(y>=x){
            if(y&1){
                base=(y-1)*(y-1)+x;
            }
            else{
                base=y*y-x+1;
            }
        }
        else{
            if(x&1){
                base=x*x-y+1;
            }
            else{
                base=(x-1)*(x-1)+y;
            }
        }
        cout<<base<<endl;
    }
    return 0;
}