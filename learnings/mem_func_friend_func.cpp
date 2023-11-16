#include<iostream>
using namespace std;
class show;
class calculate
{   public:
        long int factorial(long int x)
        {   
            if(x==0)
                return(1);
            else
                return(x*factorial(x-1));
        }
};
class show
{
    public:
        void operation(long int y,calculate c)
        { 
            cout<<"Factorial of given number is : "<<c.factorial(y)<<endl;
        }
        friend long int calculate:: factorial(long int);
};
int main()
{
    calculate c;
    show s;
    long int k,i;
    cout<<"Enter a number : ";
    cin>>i;
    s.operation(i,c);
    return 0;
}