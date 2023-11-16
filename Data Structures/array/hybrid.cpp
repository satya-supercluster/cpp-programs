#include<iostream>
#include<algorithm>
using namespace std;
int hybridMaximum(int n,int a[],int m,int b[]){
    sort(a,a+n);
    sort(b,b+m);
    int ma=max(a[n-1],b[m-1]);
    int mi=min(a[0],b[0]);
    long long ans1=(mi+(n+m-1)*ma)-(mi*(n+m));
    long long ans2=((n+m)*ma)-(ma+(n+m-1)*mi);
    return max(ans1,ans2);
}
int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){ cin>>a[i]; }
        int m;
        cin>>m;
        int b[m];
        for(int i=0;i<m;i++){ cin>>b[i]; }
        cout<<hybridMaximum(n,a,m,b)<<endl;
    }
    return 0;
}