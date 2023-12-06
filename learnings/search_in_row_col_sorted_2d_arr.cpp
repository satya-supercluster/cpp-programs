#include<iostream>
#include<vector>
using namespace std;
pair<int,int> binary_search(vector<vector<int>> arr,int n,int m,int key){
    int i=0,j=m-1;
    while(i>=0&&i<n&&j>=0&&j<m){
        if(arr[i][j]==key) return {i,j};
        else if(arr[i][j]>key) j--;
        else i++;
    } 
    return {-1,-1};
}
int main(){
    int n,m,key;
    cin>>n>>m>>key;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    pair<int,int> se=binary_search(a,n,m,key);
    if(se.first==-1){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"Found at index {"<<se.first<<","<<se.second<<"}"<<endl;
    }
    return 0;
}