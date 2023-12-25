#include<bits/stdc++.h>
using namespace std;
#define formal			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ulli			unsigned long long int
#define double			long double
#define ll				long long int
#define ALL(x)			(x).begin(),(x).end()
#define loop0(i,k)		for(ll i=0;i<k;i++)
#define loop(i,s,l)		for(ll i=s;i<=l;i++)
#define inloop(x)		for(auto it : x)
#define outloop(x)		for(auto it : x) cout<<it.first<<" "<<it.second<<endl;
#define outloop1(x)		for(auto it : x) cout<<it<<" ";
#define MOD				1e9+7
#define MP				make_pair
#define F				first
#define S				second
#define pb				push_back
#define pc				pop_back
#define mems(x,y)		memset(x,y,sizeof(x))
#define vi				vector<ll>
#define vc				vector<char>
#define vs				vector<string>
#define usi				unordered_set<ll>
#define umii			unordered_map<ll,ll>
#define si				set<ll>
#define mii				map<ll,ll>
#define pii				pair<ll,ll>
const	bool			testcases{1};



void SATYAMEV_JAYATE(){

    ll n,val1=0,val2=0,val3=0,p0=0,p1=0,p2=0;
    vi s[3];
    cin>>n;
    umii m;
    vi v(n);
    for(auto&i:v) cin>>i,m[i]++;
    if(m[1]>=2) val1=1;
    if(m[2]>=2) val2=2;
    if(m[3]>=2) val3=3;
    for(auto [i,j]:m){
        if(j>=2&&val1==0) val1=i;
        else if(j>=2&&val2==0&&val1!=i&&val3!=i) val2=i;
        else if(j>=2&&val3==0&&val2!=i&&val1!=i) val3=i;
    }
    for(int i=0;i<n;i++){
        if((v[i]==val1)&&(s[0].size()<2)){
            s[0].pb(i);
        }
        if((v[i]==val2)&&(s[1].size()<2)){
            s[1].pb(i);
        }
        if((v[i]==val3)&&(s[2].size()<2)){
            s[2].pb(i);
        }
    }
    if((s[0].size()==2)&&(s[1].size()==2)&&(val1==1&&val2==2)){
        p0=1;
        v[s[0][0]]=3;
        v[s[0][1]]=1;
        v[s[1][0]]=3;
        v[s[1][1]]=2;
        // cout<<12<<endl;
    }
    else if((s[1].size()==2)&&(s[2].size()==2)&&(val2==2&&val3==3)){
        p1=1;
        v[s[2][0]]=3;
        v[s[2][1]]=1;
        v[s[1][0]]=1;
        v[s[1][1]]=2;
        // cout<<23<<endl;
    }
    else if((s[0].size()==2)&&(s[2].size()==2)&&(val1==1&&val3==3)){
        // cout<<13<<endl;
        p2=1;
        v[s[0][0]]=2;
        v[s[0][1]]=1;
        v[s[2][0]]=3;
        v[s[2][1]]=2;
    }
    else if((s[0].size()==2)&&(s[1].size()==2)){
        p0=1;
        v[s[0][0]]=3;
        v[s[0][1]]=1;
        v[s[1][0]]=3;
        v[s[1][1]]=2;
        // cout<<12<<endl;
    }
    else if((s[1].size()==2)&&(s[2].size()==2)){
        p1=1;
        v[s[2][0]]=3;
        v[s[2][1]]=1;
        v[s[1][0]]=1;
        v[s[1][1]]=2;
        // cout<<23<<endl;
    }
    else if((s[0].size()==2)&&(s[2].size()==2)){
        p2=1;
        // cout<<13<<endl;
        v[s[0][0]]=2;
        v[s[0][1]]=1;
        v[s[2][0]]=3;
        v[s[2][1]]=2;
    }
    else {
        cout<<-1<<endl;
        return;
    }
    for(auto i:v) 
    {
        if(i==1||i==2||i==3){
            cout<<i<<" ";
            // continue;
        }
        else{
            if(i==val1) cout<<"1 ";
            else if(i==val2) cout<<"2 ";
            else if(i==val3) cout<<"3 ";
            // continue;
            else if(p0) cout<<"3 ";
            else if(p1) cout<<"1 ";
            else cout<<"2 ";
        }
    }
    cout<<endl;

}



int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    formal;
    ll t=1;
    if(testcases){
        cin>>t;
    }
    while(t--){
        SATYAMEV_JAYATE();
    }
    return 0;
}