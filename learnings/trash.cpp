#include<bits/stdc++.h>
using namespace std;
int main(){
    int b,n,m,max1=-1;
    cin>>b>>n>>m;
    int keyboards[n],drives[m];
    for(int i=0; i<n; i++){
        cin>>keyboards[i];
    }
    for(int i=0; i<m; i++){
        cin>>drives[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(keyboards[i]+drives[j]<=b)
             max1 =max(max1,keyboards[i]+drives[j]);
        }
        
    }
    cout<<max1; 
    return 0;
}