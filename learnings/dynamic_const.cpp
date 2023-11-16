#include<iostream>
class A
{
    private:
        int a,b;
    public:
        A(int x)        //Dynamic Constructor
        {
            int *p=new int;
            *p=x;
            std::cout<<*p<<std::endl;
        }
};
int main()
{
    int l;
    std::cin>>l;
    A b(l);
    return 0;
}