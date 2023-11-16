#include<bits/stdc++.h>
using namespace std;
#define formal			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ulli 			unsigned long long int
#define ll				long long int
#define ALL(x)			(x).begin(),(x).end()
#define loop0(i,k)		for(ll i=0;i<k;i++)
#define loop1(i,k)		for(ll i=1;i<=k;i++)
#define inloop(x)       for(auto it : x)
#define MOD				1000000007
#define m_p				make_pair
#define ff				first
#define ss				second
#define pb				push_back
#define pc				pop_back
#define mem(x,y)        memset(&x[0],y,x.size()*sizeof(x[0]))
#define mems(x,y)       memset(x,y,sizeof(x))


typedef vector<ll> 				vi;
typedef vector<char> 			vc;
typedef vector<string> 			vs;
typedef unordered_set<ll> 		usi;
typedef unordered_map<ll,ll> 	umii;
typedef set<ll> 				si;
typedef map<ll,ll> 				mii;
typedef pair<ll,ll>  			pii;
const   bool testcases=			true;



void solve(){
    set<pii> s1,s2,s3,s4,s5;
    for(int i=0;i<10;i++){
        s1.insert({0,i});
        s1.insert({i,0});
        s1.insert({9,i});
        s1.insert({i,9});
    }
    for(int i=1;i<9;i++){
        s2.insert({1,i});
        s2.insert({i,1});
        s2.insert({8,i});
        s2.insert({i,8});
    }
    for(int i=2;i<8;i++){
        s3.insert({2,i});
        s3.insert({i,2});
        s3.insert({7,i});
        s3.insert({i,7});
    }
    for(int i=3;i<7;i++){
        s4.insert({3,i});
        s4.insert({i,3});
        s4.insert({6,i});
        s4.insert({i,6});
    }
    for(int i=4;i<6;i++){
        s5.insert({4,i});
        s5.insert({i,4});
        s5.insert({5,i});
        s5.insert({i,5});
    }
    char s[10][10];
    ll score=0;
    loop0(i,10){
        loop0(j,10){
            cin>>s[i][j];
            if(s[i][j]=='.'){
                continue;
            }
            inloop(s1){
                if(it.first==i&&it.second==j){
                    score+=1;
                }
            }
            inloop(s2){
                if(it.first==i&&it.second==j){
                    score+=2;
                }
            }
            inloop(s3){
                if(it.first==i&&it.second==j){
                    score+=3;
                }
            }
            inloop(s4){
                if(it.first==i&&it.second==j){
                    score+=4;
                }
            }
            inloop(s5){
                if(it.first==i&&it.second==j){
                    score+=5;
                }
            }
        }
    }
    cout<<score<<endl;
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
        solve();
    }
    return 0;
}