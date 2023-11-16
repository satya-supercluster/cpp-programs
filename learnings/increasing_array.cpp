#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    long long c=0;
    for(int i=0; i<n-1; i++){
        if(a[i+1]<a[i]){
            c+=a[i]-a[i+1];
            a[i+1]=a[i];
        }
    }
    cout<<c<<endl;
    return 0;
}