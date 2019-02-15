#include<bits/stdc++.h>
using namespace std;
struct node 
{
	int data,l,r;
	void assign(int x,int index)
	{
		data = x;
		l = index;
		r = index;
	}
	void combine(node &n1,node &n2)
	{
	}	
	void update(int x)
	{
		cnt+=x;
	}
};
//utility functions 
//updating the current node and also its lazy value
void upd(int id,int l,int r,int x)
{
	lazy[id]+=x;
	tree[id].update((r-l)*x);
}
//propogating update to lower level nodes
void shift(int id,int l,int r)
{
	if(lazy[id] && l+1<r)
	{
		int mid = (l+r)/2;
		upd(2*id,l,mid,lazy[id]);
		upd(2*id+1,mid+1,r,lazy[id]);
		lazy[id]=0;
	}
}

void update(int x,int y,int val,int id=1,int l,int r=n)
{
	if(x>=r && y<=l)
		return ;
	if(x<=l && r<=y)
		upd(id,l,r,val);
	else
	{
		shift(id,l,r);
		
		update();
		update();	
	}
}

void build(ll id,ll l,ll r)
{
	if(l == r)
		tree[id].assign(q[l],l);
	else
	{
		build(2*id,l,(l+r)/2);
		build(2*id+1,(l+r)/2+1,r);
		tree[id].combine(tree[2*id],tree[2*id+1]);
	}
}
int query(int x,int y,int id=1,int l=0,int r=n-1)
{
	if(x>=r && l>=y)return ;
	if(x<=l && r<=y)return tree[id].cnt;
	else
	{
		shift(id,l,r);
		int mid = (l+r)/2;
		return query(x,y,2*id,l,mid) + query(x,y,2*id+1,mid,r);
	}
}
int main()
{

}
