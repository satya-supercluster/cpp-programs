#include<iostream>
using namespace std;
int main(){
    long long n; cin>>n;
    long long k=n*(n+1)/2;
    n--;
    long long sum=0;
    while(n--){
        long  long x; cin>>x;
        sum+=x;
    }
    cout<<k-sum<<endl;
    return 0;
}