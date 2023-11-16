#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int	main(int argc, char **argv)
{
    int s;
    vector<int> f(5,0);
    for(int i=0;i<5;i++)
    {
        cin>>s;
        f.at(i)=s;
    }
    sort(f.begin(),f.end());
    cout<<"Largest number : "<<f[4]<<endl<<"Smallest number : "<<f[0]<<endl;
    cout<<f.at(2)<<endl<<f.size()<<endl<<f.capacity()<<endl;
    f.push_back(1);
    cout<<f.at(3)<<endl<<f.size()<<endl<<f.capacity()<<endl;

    system("pause");
    return 0;
}
