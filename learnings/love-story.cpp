#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t; cin>>t;
    string cf="codeforces";
    while(t--){
        string str;cin >> str;
        int count=0;
        for(int i=0; i<10;i++){
            if(str[i]!=cf[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}