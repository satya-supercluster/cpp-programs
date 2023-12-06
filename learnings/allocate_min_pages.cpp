#include<iostream>
using namespace std;
bool isvalid(int*arr,int n,int k,int val){
    int st=0,sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>val){
            st++;
            sum=arr[i];
        }
        else if(sum==val) st++,sum=0;
        if(st>k) return false;
    }
    return true;
}
int all(int*arr,int n,int k,int sum,int mx){
    int l=mx,h=sum,mid,ans=-1;
    while(l<=h){
        mid=l+(h-l)/2;
        if(isvalid(arr,n,k,mid)){
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}
int main(){
    int n,k,sum=0,mx=0;
    cin>>n>>k;
    int a[n];
    for(auto&i:a) cin>>i,sum+=i,mx=(i>mx)?i:mx;
    int ans=all(a,n,k,sum,mx);
    if(ans==-1||n<k) cout<<"not possible"<<endl;
    else cout<<"possible: "<<ans<<endl;
    return 0;
}