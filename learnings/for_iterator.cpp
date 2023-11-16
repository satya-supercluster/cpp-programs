#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t,sum=0;
    vector<int> v(5,0);
    cout<<"Enter five values : "<<endl;
    for(int k=0;k<5;k++)
    {
        cin>>t;
        v.push_back(t);
    }
    for(int x:v)
        sum+=x;
    cout<<"The Sum is : "<<sum;
    return 0;
}
