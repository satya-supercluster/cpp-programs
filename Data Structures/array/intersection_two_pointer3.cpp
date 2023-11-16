//Intersection
#include<iostream>
#include<set>
using namespace std;
void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                arr[j] +=arr[i];
                arr[i]=arr[j]-arr[i];
                arr[j] = arr[j]-arr[i];
            }
        }
    }
}
int count_intersections(int arr1[],int n1,int arr2[],int n2){
    set<int> s;
    int p1=0,p2=0;
    while(p1!=n1&&p2!=n2){
        if(arr1[p1]==arr2[p2]){
            s.insert(arr1[p1]);
            p1++;
            p2++;
        }
        else if(arr1[p1]>arr2[p2]){
            p2++;
        }
        else if(arr1[p1]<arr2[p2]){
            p1++;
        }
        
    }
    return s.size();
}
int main(){
    int arr1[]={1,2,3,7,8,9,0,12,13,14,15,16,17,18,99};
    int arr2[]={98,97,96,95,54,3,2,1,45,5,6,7,7,8,9,3};
    int n1=sizeof(arr1)/sizeof(*arr1);
    int n2=sizeof(arr2)/sizeof(*arr2);
    sort(arr1,n1);
    sort(arr2,n2);
    int c=count_intersections(arr1,n1,arr2,n2);
    cout<<"Intersections: "<<c<<endl;
    return 0;
}