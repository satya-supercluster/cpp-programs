#include<iostream>
using namespace std;
int main()
{
    double v[7],temp=0,temp1;
    cout<<"You have to enter 7 values representing store sales for each day of one week"<<endl;
    for(int i=0;i<7;i++)
    {
        cout<<"Enter the "<<i+1<<"th value : ";
        cin>>v[i];
    }
    temp1=v[0];
    for(int i=0;i<7;i++)
    {
        if(temp<v[i])
            temp=v[i];
        if(temp1>v[i])
            temp1=v[i];
    }
    cout<<"Highest sale : "<<temp<<endl;
    cout<<"Lowest sale : "<<temp1<<endl;
    return 0;
}