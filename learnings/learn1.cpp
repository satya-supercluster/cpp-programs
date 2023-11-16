#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int a,b,c;
    char ch;
    stringstream ss(str);
    ss>>a>>ch>>b>>ch>>c>>ch;
    cout<<a<<' '<<b<<' '<<c;
    return 0;
}