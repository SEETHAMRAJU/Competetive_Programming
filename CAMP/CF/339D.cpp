#include<bits/stdc++.h>
#define llint long long int
#define append push_back
#define SIZE 1000000
using namespace std;
struct node 
{
	llint l,r,count,x;
};
struct node tree[SIZE];
llint ans = 1;
void build(vector<llint>q,llint n);
void update(llint id,llint b);
llint query(llint id,llint l,llint r);
int main()
{
	vector<llint> q;
	llint n,m,temp;
	scanf("%lld%lld",&n,&m);
	for(int i=0;i<pow(2,n);i++)
	{
		scanf("%lld",&temp);
		q.append(temp);
	}
	build(q,pow(2,n));
	llint p,b;
	for(int i=0;i<m;i++)
	{
		scanf("%lld%lld",&p,&b);
		update(pow(2,n)+p-1,b);
		printf("%lld\n",query(1,0,pow(2,n)-1));
	}
	return 0;
}
void build(vector<llint> q,llint n)
{
	for(int i=0;i<q.size();i++)
	{
		tree[n+i].count = 0;
		tree[n+i].x = q[i];
		tree[n+i].l = i;
		tree[i+n].r = i;
	}
	for(int i=n-1;i>0;i--)
	{
		tree[i].r = tree[2*i+1].r;
		tree[i].l = tree[2*i].l;
		if(tree[2*i].count == 0)
			tree[i].x = tree[2*i+1].x | tree[2*i].x;
		else
			tree[i].x = tree[2*i+1].x ^ tree[2*i].x;
		tree[i].count = 1 - tree[2*i+1].count;
	}
}
void update(llint id,llint x)
{
	tree[id].x = x;
	id = id >> 1;
	while(id>0)
	{
		if(tree[id].count == 1)
			tree[id].x = tree[2*id].x | tree[2*id+1].x;
		else
			tree[id].x = tree[2*id].x ^ tree[2*id+1].x;
		id = id >> 1;
	}
	
}
llint query(llint id,llint l,llint r)
{
	return tree[id].x;
}




