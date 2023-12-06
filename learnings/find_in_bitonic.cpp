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
int bin_inc(int*arr,int h,int key){
    int l=0,mid;
    while(l<=h){
        mid=l+(h-l)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key) h=mid-1;
        else l=mid+1;
    }
    return -1;
}
int bin_dec(int*arr,int n,int l,int key){
    int h=n-1,mid;
    while(l<=h){
        mid=l+(h-l)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) l=mid+1;
        else h=mid-1;
    }
    return -1;
}
int search(int*arr,int n,int key){
    int mx=maximum(arr,n);
    int ans1=bin_inc(arr,mx-1,key);
    int ans2=bin_dec(arr,n,mx,key);
    if(ans1!=-1) return ans1;
    else if(ans2!=-1) return ans2;
    return -1;
}
int main(){
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int& i:a) cin>>i;
    if(search(a,n,key)==-1){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found at index: "<<search(a,n,key);
    }
    return 0;
}