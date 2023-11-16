#include<bits/stdc++.h>
using namespace std;
int main(){
    long long arr[]={1,2,3,4,7,8,50,55,100,101,9,45,46,47,48};
    int n=sizeof(arr)/sizeof(*arr);
    int i=0,j=0;
    sort(arr,arr+n);
    while(i<n){
        j=i;
        while((j+1<n)&&(arr[j+1]==arr[j]+1)){
            j++;
        }
        if(i==j){
            cout<<arr[i]<<" ";
            i++;
        }
        else{
            cout<<arr[i]<<"-"<<arr[j]<<" ";
            i=j+1;
        }
    }
    return 0;
}