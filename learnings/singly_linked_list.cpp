#include<iostream>
using namespace  std;
class ll
{
    private:
        int data;
        ll *next=NULL;
    public:
        void linker(ll *ptr)
        {
            next=ptr;
        }
        void setdata()
        {
            cout<<"Enter the element value:"<<endl;
            cin>>data;
            if(next!=NULL)
            next->setdata();
        }
        void showdata()
        {
            cout<<data<<endl;
            if(next!=NULL)
            next->showdata();
        }
};
int main()
{
    ll *head;
    ll *first=new ll;
    ll *second=new ll;
    ll *third=new ll;
    head=new ll;
    head->linker(first);
    first->linker(second);
    second->linker(third);
    head->setdata();
    cout<<"The data you entered in the linked list is : "<<endl;
    head->showdata();
    return 0;
}