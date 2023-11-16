#include<iostream>
using namespace std;
int main(){
    //Getting Inputs
    int n;
    cout<<"Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n; i++) cin >> a[i];
    //Traversing the array
    cout<<"Traversal of the array: "<<endl;
    for(int i=0; i<n; i++) cout << a[i]<<" "; cout<<endl;
    //Now sorting the array by bubble sort
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(a[j]>a[i]){
                //swapping a[j] and a[i]
                a[j]=a[j]^a[i];
                a[i]=a[j]^a[i];
                a[j]=a[j]^a[i];
            }
        }
    }
    //Printing the Max and Min values
    int mx = a[n-1],mn = a[0];
    cout<<"Max element: "<<mx<<endl<<"Min element: "<<mn<<endl;
    //Calculating the Median
    //Median of the data may not be present as element in the data itself in case of even number of elements
    float median;
    if(n&1){
        //Median is the middle element of a sorted data
        median = a[n/2];
    }
    else{
        //In case of two middle elements we need to take average of those two for median value
        median = (a[n/2]+a[n/2-1])/2.0; 
    }
    cout<<"Median of the elements: "<<median<<endl;
    //Calculating the second largest element
    int sec=a[n-1];
    for(int j=n-1; j>=0; j--){
        if(a[j]!=mx){
            sec=a[j];
            break;
        }
    }
    if(sec==mx){
        cout<<"There is no second largest element in the array!"<<endl;
    }
    else{
        cout<<"Second largest element: "<<sec<<endl;
    }
    return 0;
}