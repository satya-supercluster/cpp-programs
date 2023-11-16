#include<iostream>
#include<algorithm>
using namespace std;
int	main(int argc, char **argv)
{
    int t; cin>>t;
    while(t--){
        int p=1;
    int n; cin>>n;
    long long a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]<0) p=0;
    }
    sort(a,a+n);
    if(p){
        cout<<a[n-1]<<endl;
    }
    else{
        int k=a[0];
        for(int i=0; i<n; i++){
            if(a[i]<0)  k=a[i];
            else break;
        }
        cout<<k<<endl;
    }
    }
    return 0;
}
