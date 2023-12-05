#include<iostream>
using namespace std;
int count_reverse_bin_search(int*arr,int n){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if((arr[mid]<=arr[(mid+1)%n])&&(arr[mid]<=arr[(mid-1+n)%n])){
            return n-mid;
        }
        if(arr[low]<=arr[mid]){
            low=mid+1;
        }
        else if(arr[high]>=arr[mid]){
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(auto&i:a)cin>>i;
    cout<<"Reversed "<<count_reverse_bin_search(a,n)<<" times"<<endl;
    return 0;
}