#include<iostream>
using namespace std;
void print_binary(int num)
{
    for(int i=9;i>=0;i--)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
//odd binary numbers end with 1 and even ends with 0
void odd_even(int i)
{
    if(i&1)
        cout<<"odd"<<endl;
    else    
        cout<<"even"<<endl;
}
int	main(int argc, char **argv)
{
    for(int i=0;i<8;i++)
    {
        print_binary(i);
        odd_even(i);
    }
    
    system("pause");
    return 0;
}
