#include<iostream>
using namespace std;
int min_diff(int*arr,int n,int key){
    int low=0, mid,high=n-1;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(abs(arr[low]-key)<(abs(arr[high]-key))) return low;
    else return high;
}
int main(){
    int n,key;
    cin>>n>>key;
    int a[n];
    for(auto&i:a) cin>>i;
    cout<<"Minimum difference comes with element at index: "<<min_diff(a,n,key)<<endl;
    return 0;
}