#include<bits/stdc++.h>
using namespace std;

struct segmenttree{
	vector<int> st;
	int n;
	void init(int _n){
		this->n=_n;
		st.resize(4*n,0);
	}
	void build(int start,int end,int node,vector<int>&v){
		//leaf node base case
		if(start==end){
			st[node]=v[start];
			return;
		}
		int mid=start+(end-start)/2;
		//left (start,mid)
		build(start,mid,2*node+1,v);
		//right (mid+1,end)
		build(mid+1,end,2*node+2,v);

		st[node]=st[node*2+1]+st[node*2+2];
	}
	int query(int start,int end,int l,int r,int node){
		// no overlap
		if(start>r || end<l) return 0;
		// complete operlap
		if(start >= l && end <= r) return st[node];
		// partial overlap
		int mid = start + (end-start)/2;
		int q1 = query(start,mid,l,r,2*node+1);
		int q2 = query(mid+1,end,l,r,2*node+2);
		return q1+q2;
	}
	void update(int start,int end,int node,int index,int value){
		//base case
		if(start==end){
			st[node]=value;
			return;
		}
		int mid=start + (end-start)/2;
		if(index<=mid) update(start,mid,2*node+1,index,value);
		else update(mid+1,end,2*node+2,index,value);
		st[node]=st[node*2+1]+st[node*2+2];
		return;
	}
	void build(vector<int>&v){
		build(0,v.size()-1,0,v);
	}
	int query(int l,int r){
		return query(0,n-1,l,r,0);
	}
	void update(int x,int y){
		update(0,n-1,0,x,y);
	}
} ;

int main(){
    segmenttree tree;
    vector<int> v(10,1);
    for(auto&i:v)cin>>i;
    tree.init(v.size());
    tree.build(v);
    cout<<tree.query(2,6)<<'\n';
    tree.update(4,10);
    cout<<tree.query(2,6)<<'\n';
    
	return 0;
}