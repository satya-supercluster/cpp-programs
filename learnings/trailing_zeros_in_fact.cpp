#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    unsigned x,c5=0;
    cout<<"Enter a number: ";
    cin>>x;
    int temp=x;
    while(temp){
        c5+=temp/5;
        temp/=5;
    }
    cout<<"There are "<<c5<<" trailing zeroes in "<<x<<"!"<<endl;
    return 0;
}
