#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    int pre[n][n];
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(i==0){
    //             if(j==0){
    //                 pre[0][0]=a[0][0];
    //             }
    //             else{
    //                 pre[i][j]=pre[i][j-1]+a[i][j];
    //             }
    //         }
    //         else if(j==0){
    //             pre[i][j]=pre[i-1][j]+a[i][j];
    //         }
    //         else{
    //             pre[i][j]=pre[i][j-1]+a[i][j]+a[i-1][j];
    //         }
    //     }
    // }



    //pre[i][j]=pre[i][j-1]+pre[i-1][j]+a[i][j]-pre[i-1][j-1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            pre[i][j]=a[i][j];
            if(i-1>=0) pre[i][j]+=pre[i-1][j];
            if(j-1>=0) pre[i][j]+=pre[i][j-1];
            if(j-1>=0&&i-1>=0) pre[i][j]-=pre[i-1][j-1];
        }
    }
    cout<<"--------------------------------"<<endl;


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<pre[i][j]<<" ";
        }
        cout<<endl;
    }



    // 3
    // 1 2 3
    // 4 5 6
    // 7 8 9
    // --------------------------------
    // 1 3 6 
    // 5 12 21 
    // 12 27 45 


    return 0;
}