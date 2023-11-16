#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=0,j=0;
    string s1;
    cin>>s1;
    // while(str[i]!='1'){
    //     if(str[i]=='0'){ cout<<"yes"<<endl;
    // }
   string s2(s1.begin()+1,s1.end()); s2.push_back(s1.front());
   string s3(s1.begin(),s1.end()-1); s3.insert(s3.begin(),s1.back());
    cout<<s2<<endl;
    cout<<s3<<endl;

    // cout<<str;
    return 0;
}
