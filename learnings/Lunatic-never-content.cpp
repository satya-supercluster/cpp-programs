#include<iostream>
using namespace std;
bool palindrome(long long *arr,int n){
    int right=n-1;
    int left=0;
    while(left<right){
        if(arr[left]!=arr[right]) return false;
        left++; right--;
    }
    return true;
}
int	main(int argc, char **argv)
{
    int t; cin>>t;
    while(t--){
        int n,ans=0; cin>>n;
        long long a[n],max=-1;
        for(int i=0; i<n; i++) {cin>>a[i]; if(a[i]>max) max=a[i];}
        for(int x=1;x<max;x++){
            for(int i=0;i<n;i++){
                a[i]=a[i]%x;
            }
            if(palindrome(a,n)) ans=x;
        }
        cout<<ans<<endl;
    }
    return 0;
}
