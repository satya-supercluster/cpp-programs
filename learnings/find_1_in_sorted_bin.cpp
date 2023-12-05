#include<iostream>
using namespace std;
int bin_inf(string arr,int n){
    int low=0,mid,high=1,ans=-1;
    while(arr[high]!='1'){
        low=high;
        high=high*2;
    }
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]=='1'){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]=='0'){
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<"First 1 encountered at index: "<<bin_inf(s,n)<<endl;
    return 0;
}