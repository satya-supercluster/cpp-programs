#include<iostream>
namespace MySpace
{
    int add(int x,int y)
    {
        return(x+y);
    }
    int mult(int,int);
}
namespace OneSpace
{
    int a;
    void cout()
    {
        std::cout<<"Given value is : "<<a<<std::endl;
    }
}
namespace SecondSpace
{
    using namespace std;
    void show()
    {
        cout<<"SecondSpace is in execution"<<endl;
    }
}
int MySpace::mult(int x,int y)
{
    return(x*y);
}
int main()
{
    int a,b;
    std::cout<<"Enter two numbers :"<<std::endl;
    std::cin>>a>>b;
    using namespace std;
    cout<<"Addition of given numbers is : "<<MySpace::add(a,b)<<endl;
    using namespace MySpace;
    std::cout<<"Multiplication of given numbers is : "<<mult(a,b)<<std::endl;
    std::cin>>OneSpace::a;
    OneSpace::cout();
    using namespace SecondSpace;
    cout<<a<<" "<<b<<" "<<endl;
    show();
    return 0;
}