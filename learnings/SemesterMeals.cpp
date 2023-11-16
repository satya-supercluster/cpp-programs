#include<iostream>
using namespace std;
int main()
{
    int meals[3]={450,520,590},m;
    cout<<"Enter the number of meals per day : ";
    cin>>m;
    cout<<"The Semester room and board rate is : "<<300+meals[m-1]<<endl;
    return 0;
}