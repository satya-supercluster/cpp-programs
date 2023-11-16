#include<iostream>
using namespace std;
int add(int,int);
int main()
{
    int x,y;
    cin>>x>>y;
    const int& a=add(x,y);  //refrence contains only const value
    cout<<a;
    return 0;
}
int add(int a,int b)
{
    return(a+b);
}