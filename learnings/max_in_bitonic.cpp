#include<iostream>
using namespace std;
int maximum(int*arr,int n){
    int l=0,h=n-1,mid;
    while(l<=h)
    {
        mid=l+(h-l)/2;
        if(mid==0){
            if(arr[mid]>arr[mid+1]) return mid;
            else return mid+1;
        }
        if(mid==n-1){
            if(arr[mid]>arr[mid-1]) return mid;
            else return mid-1;
        }
        if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
            return mid;
        }
        else if(arr[mid+1]>arr[mid]) l=mid+1;
        else if(arr[mid-1]>arr[mid]) h=mid-1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int& i:a) cin>>i;
    cout<<"Max at index: "<<maximum(a,n);
    return 0;
}