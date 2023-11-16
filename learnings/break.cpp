#include<iostream>
using namespace std;
int main()
{
    int i,p=0;
    for(i=0;i<=10;i++)
    {
        cout<<i<<" ";
        if(i==5)
        {
            p=1;
            cout<<endl<<p;
            break;
        }
    }
    return 0;
}