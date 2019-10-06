#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
char x[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
struct node 
{
	int l,r;
	map<char,int> data;
	void assign(char s ,int index)
	{
		for(int i=0;i<26;i++)
		{
			data[x[i]] = 0;
		}
		data[s] += 1;
		l = index;
		r = index;
	}
	void combine(node &n1,node &n2)
	{
		for(int i=0;i<26;i++)
		{
			char temp = x[i];
			data[temp] = n1.data[temp] + n2.data[temp];
		}
		l = n1.l;
		r = n2.r;
	}
};
node tree[N];
string q;
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
	IOS;
	int n,q,a,b;
	cin >> n >> q;
	cin >> s;
	struct node ans;
	build(1,1,n);
	for(int i=0;i<q;i++)
	{
		cin >> a >> b;
		ans = query(1,a,b);
	}
	cout << 
	return 0;
}
