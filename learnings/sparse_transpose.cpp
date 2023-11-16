#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the size of the matrix (row and column): ";
    cin>>m>>n; // m cross n matrix
    int t;
    cout<<"Enter the number of non-zero elements in the matrix: ";
    cin>>t;
    int a[t][3]; // i,j,value
    cout<<"Enter the coordinates(1-based indexing) and values of each non-zero element (i, j, value): "<<endl;
    for(int i=0; i<t; i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    int s[n+1]={0};
    for(int i=0;i<t;i++){
        s[a[i][1]]++;
    }
    int T[n+1];
    T[0]=0;
    for(int i=1;i<=n;i++) 
        T[i]=T[i-1]+s[i-1];     
    int b[t][3];
    for(int i=0;i<t;i++){       
       int j=a[i][1];
       b[T[j]][0]=a[i][1];
        b[T[j]][1]=a[i][0];
        b[T[j]][2]=a[i][2];
        T[j]++;
    }
    cout<<"After Transposing the sparse matrix: "<<endl;
    for(int i=0; i<t; i++){
        cout<<b[i][0]<<" "<<b[i][1]<<" "<<b[i][2]<<endl;
    }
    return 0;
}