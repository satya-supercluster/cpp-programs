#include<bits/stdc++.h>
using namespace std;
int	main(int argc, char **argv)
{
    int k;
    vector<int> v;
    cout<<"Enter Five Numeric Values : "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>k;
        v.push_back(k);
    }
    if(all_of(v.begin(),v.end(),[](int x){return x>0;}))
        cout<<"All Positive"<<endl;
    else if(any_of(v.begin(),v.end(),[](int x){return x>0;}))
        cout<<"At Least one Positive"<<endl;
    if(none_of(v.begin(),v.end(),[](int x){return x>0;}))
        cout<<"None of them is Positive"<<endl;
    system("pause");
    return 0;
}
