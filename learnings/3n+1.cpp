#include<iostream>
using namespace std;
int power(int a,int b){
    int res=1;
    while(b){
        if(b&1)res=res*a;
        a=a*a;
        b/=2;
    }
    return res;
}
int main(){
    int n,rep;
    cin>>n>>rep;    // rep=3 for 3n+1
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int bits[32]={0};
    for(int i=0;i<32;i++){
        for(int j=0;j<n;j++){
            if(((a[j]>>i)&1)==1)bits[i]=(bits[i]+1)%rep;
        }
    }
    int ans=0;
    for(int i=0;i<32;i++){
        if(bits[i])
        ans+=power(2,i);
        // cout<<bits[i]<<" ";
    }
    cout<<ans<<endl;
    return 0;
}