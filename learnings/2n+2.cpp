#include<iostream>
using namespace std;
int main(){
    int n,x=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        x^=a[i];
    }
    int temp=x,p=0;
    while(temp){
        if(temp&1){
            break;
        }
        p++;
        temp>>=1;
    }
    int newx=0;
    for(int i=0;i<n;i++){
        if((a[i]>>p)&1==1) newx^=a[i];
    }
    cout<<newx<<" "<<(x^newx)<<endl;
    return 0;
}