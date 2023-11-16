#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int l=0,h=6;
    while(l<h){
        arr[l]+=arr[h];
        arr[h]=arr[l]-arr[h];
        arr[l]=arr[l]-arr[h];
        l++;h--;
    }
    for(int t :arr){
        cout<<t<<" ";
    }
}