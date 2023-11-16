#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;   // uses hash implementation whether set uses red black tree implementation
    s.insert(80);
    s.insert(40);
    s.insert(801);
    s.insert(203);
    s.insert(10);
    s.insert(80);
    for(auto it=s.begin(); it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<s.size()<<endl;
    int key=203;
    if(s.find(key)==s.end()){                                                               //    O(1)
        cout<<"Key is not present"<<endl;
    }
    else
        {   cout<<"Key is present"<<endl;
            s.erase(key);           // s.erase(s.find(key));            erase can recieve key as well as iterator to erase
        }
    return 0;
}