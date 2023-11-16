#include<iostream>
using namespace std;
int	main(int argc, char **argv)
{
    int number,number1;
    cout<<"Enter a Number : ";
    cin>>number;
    number1=number;
    // counting set bits
    int count=0;
    while(number1)
    {
        if(number1&1)
            count++;
        number1=number1>>1;
    }
    cout<<"There "<<count<<" bits are set in this number"<<endl;
    //first position check
    cout<<"At First Position : ";
    if(number&1)
        cout<<"Set"<<endl;
    else
        cout<<"Unset"<<endl;
    //check whether bit set or not at i(th) position
    int i;
    cout<<"Enter Index to check bit : ";
    cin>>i;
    number=number>>i-1;
    if(number&1)
        cout<<"Set at "<<i<<"(th) position"<<endl;
    else
        cout<<"Unset at "<<i<<"(th) position"<<endl;
    return 0;
}
