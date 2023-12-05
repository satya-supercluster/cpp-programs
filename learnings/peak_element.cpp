#include<iostream>
using namespace std;
int peak(int*arr,int n){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if((mid==0)&&arr[mid]>arr[mid+1])return mid;
        if((mid==n-1)&&arr[mid]>arr[mid-1])return mid;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]<arr[mid-1]) high=mid-1;
        else if(arr[mid]<arr[mid+1]) low=mid+1;
        // cout<<low<<" "<<mid<<" "<<high<<endl;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(auto&i:a) cin>>i;
    cout<<"Peak element found at index: "<<peak(a,n)<<endl;
    return 0;
}