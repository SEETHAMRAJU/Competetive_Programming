#include<bits/stdc++.h>
#define append push_back
#define SIZE 1000000
using namespace std;
struct node 
{
	int x,l,r;
};
int d[SIZE];
int n;
struct node tree[SIZE];
void call();
void build(vector<int> q,int n);
void update(int l,int r);
int query(int id,int l,int r);
int main()
{
	int l,q,ans,r,k,temp;
	scanf("%d%d",&n,&k);
	ans = 1;
	vector<int>m;
	while(ans<n)
		ans *= 2;
	n = ans;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		m.append(temp);
	}
	build(m,n);

	for(int i=0;i<k;i++)
	{
		scanf("%d %d %d",&q,&l,&r);
		if(q == 2)
			printf("%d",query(1,l,r));
		else
			update(l,r);
	}
	return 0;
}
void build(vector<int> q,int n)
{
	for(int i=0;i<n;i++)
	{
		tree[n+i].x = q[i];
		tree[n+i].r = i;
		tree[n+i].l = i;
	}
	for(int i=n-1;i>0;i--)
	{
		tree[i].x = tree[2*i].x + tree[2*i+1].x;
		tree[i].l = tree[2*i].l;
		tree[i].r = tree[2*i+1].r;
	}


}
void update(int l,int r)
{
	for(int id=l;id<=r;id++)
	{
		id = id+n;
		tree[n+id].x = d[tree[id].x];
		id = id << 1;
		while(id>0)
		{
			tree[id].x = tree[2*id].x + tree[2*id+1].x;
			id = id << 1;
		}
	}
}
int query(int id,int l,int r)
{
	if(tree[id].l == l && tree[id].r == r)
		return tree[id].x;
	else if(tree[2*id].r < l)
		return query(2*id+1,l,r);
	else if(tree[2*id+1].l > r)
		return query(2*id,l,r);
	else
		return query(2*id,l,tree[2*id].r) + query(2*id+1,tree[2*id+1].l,r);
}




