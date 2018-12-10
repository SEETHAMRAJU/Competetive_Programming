#include<bits/stdc++.h>
#define append push_back
#define SIZE 1000000
#define llint long long int
using namespace std;
struct node
{
	llint opening,closing,l,r;
};
llint maxi(llint x,llint y)
{
	if(x>y)
		return x;
	return y;
}
llint queryClose(llint id,llint l,llint r);
llint queryOpen(llint id,llint l,llint r);
struct node tree[SIZE];
llint n;
llint o=1;
llint t=10;
void build(vector<llint> q,llint n);
llint query(llint id,llint l,llint r);
void update(llint id);
int main()
{
		memset(tree,0,sizeof(tree));
		string s;
		cin >> s;
		llint w;
		n = s.size();
		w = n;
		llint ans=1;
		while(ans<n)
		{
			ans = ans*2;
		}
		n = ans;
		vector<llint>q;
		for(llint i=0;i<w;i++)
		{
			if(int(s[i]) == 40)
				q.append(1);
			else 	
				q.append(-1);
			ans--;
		}
		while(ans>=0)
		{
			q.append(0);
			ans--;
		}
		build(q,n);
		llint k;
		scanf("%lld",&k);
		llint l,r;
		for(int i=0;i<=28;i++)
			printf("%lld %lld %lld %lld %lld\n",i,tree[i].opening,tree[i].closing,tree[i].l,tree[i].r);
		while(k>0)
		{
			scanf("%lld %lld",&l,&r);
			llint a=query(1,l-1,r-1);
			printf("a->%lld\n",a);
			printf("%lld\n",r-l+1-a);
			k--;
		}
	return 0;
}
void build(vector<llint>q,llint n)
{
	for(llint i=0;i<n;i++)
	{	
		if(q[i] == 1)
		{
			tree[i+n].opening = 1;
			tree[n+i].closing = 0;
		}
		else if(q[i] == -1)
		{		
			tree[n+i].opening = 0;
			tree[n+i].closing = 1;
		}
		else
		{
			tree[n+i].opening = 0;
			tree[n+i].closing = 0;
		}
		tree[i+n].r = i;
		tree[n+i].l = i;
	}
	for(llint i=n-1;i>0;i--)
	{
		int temp = min(tree[2*i].opening,tree[2*i+1].closing);
		tree[i].opening = tree[2*i+1].opening + maxi(0,tree[2*i].opening - temp);
		tree[i].closing = tree[2*i].closing + maxi(tree[2*i+1].closing - temp,0);
		tree[i].l = tree[2*i].l;
		tree[i].r = tree[2*i+1].r;
	}
}
llint query(llint id,llint l,llint r)
{
	if(tree[id].l == l && tree[id].r == r)
		return tree[id].opening + tree[id].closing;
	else if(tree[2*id+1].l>r)
		return query(2*id,l,r);
	else if(tree[2*id].r<l)
		return query(2*id+1,l,r);
	else
		return maxi(0,queryOpen(2*id,l,tree[2*id].r) - queryClose(2*id+1,tree[2*id+1].l,r)) + queryClose(2*id,l,tree[2*id].r)+ queryOpen(2*id+1,tree[2*id+1].l,r);
}
llint queryClose(llint id,llint l,llint r)
{
	if(tree[id].l == l && tree[id].r == r)
		return tree[id].closing;
	else if(tree[2*id+1].l>r)
		return query(2*id,l,r);
	else if(tree[2*id].r<l)
		return query(2*id+1,l,r);
	else
		return query(2*id,l,tree[2*id].r) + query(2*id+1,tree[2*id+1].l,r);

}
llint queryOpen(llint id,llint l,llint r)
{
	if(tree[id].l == l && tree[id].r == r)
		return tree[id].opening;
	else if(tree[2*id+1].l>r)
		return query(2*id,l,r);
	else if(tree[2*id].r<l)
		return query(2*id+1,l,r);
	else
		return query(2*id,l,tree[2*id].r) + query(2*id+1,tree[2*id+1].l,r);
	
}

