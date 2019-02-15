#include<bits/stdc++.h>
#define append push_back
#define N 1000001
#define M 1000000007
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 

using namespace std;
ll maxi(ll x,ll y)
{
	if(y>x)
		return y;
	return x;
}
struct node 
{
	ll prefix,suffix,sum,maxsum,l,r;
	void assign(ll val,int id)
	{
		prefix=sum=suffix=maxsum=val;
		l=r=id;	
	}
	void combine(node& left,node& right)
	{
		prefix = maxi(left.prefix,left.sum+right.prefix);
		suffix = maxi(right.suffix,right.sum+left.suffix);
		sum = right.sum + left.sum;
		maxsum = maxi(maxi(left.maxsum,maxi(prefix,maxi(suffix,left.suffix+right.prefix))),right.maxsum);
		l = left.l;
		r = right.r;
	}

};
node tree[N];
vector<ll>q;
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
	ll temp,n,size=1,m,l,r;
	IOS;
	cin >> n;
	while(size<n)
		size*=2;
	for(int i=0;i<n;i++)
	{
		cin >> temp;
		q.append(temp);
	}
	build(1,0,n-1);
	cin >> m;
	for(int i=0;i<m;i++)
	{
		cin >> l >> r;
		cout << query(1,l-1,r-1).maxsum << endl;
	}
	return 0;
}
