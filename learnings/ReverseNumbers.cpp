#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int number,reverse=0,len=0,a,m,i=0;
    cout<<"Enter the number to reverse : ";
    cin>>number;
    a=number;
    while(a)
    {
       a=a/10;
        len++;
    }
    while(number)
    {
        m=pow(10,len-i-1);
        i++;
        reverse=reverse+(number%10)*m;
        number=number/10;
    }
    cout<<"Reversed number is : "<<reverse;
    return 0;
}