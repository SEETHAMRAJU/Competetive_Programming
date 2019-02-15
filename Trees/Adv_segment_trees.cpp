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
};
void update(ll id,ll index,int val)
{
	if(tree[id].l == tree[id].r && tree[id].l == index)
		tree[id].assign(val,index);
	else
	{
		ll mid = (tree[id].l + tree[id].r)/2;
		if(index>mid)
			update(2*id+1,index,val);
		else
			update(2*id,index,val);
		tree[id].combine(tree[2*id],tree[2*id+1]);
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

node query(ll id,ll l,ll r)
{
	ll mid = (tree[id].l + tree[id].r)/2;
	if(tree[id].l == l && tree[id].r == r)
		return tree[id];
	else if(mid >=r)
		return query(2*id,l,r);
	else if(mid < l)
		return query(2*id+1,l,r);
	else
	{
		node result;
		node left = query(2*id,l,mid),right = query(2*id+1,mid+1,r);
		result.combine(left,right);
		return result;
	}
}
int main()
{

}e
