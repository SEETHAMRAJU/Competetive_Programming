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
struct node tree[SIZE];
llint n;
llint o=1;
llint t=10;
void build(vector<llint> q,llint n);
llint query(llint id,llint l,llint r);
void update(llint id);
int main()
{
	//freopen("output.txt","w",stdout);
	while(t--)
	{
		memset(tree,0,sizeof(tree));
		llint w;
		scanf("%lld",&n);
		w = n;
		llint ans=1;
		string s;
		while(ans<n)
		{
			ans = ans*2;
		}
		n = ans;
		vector<llint>q;
		cin >> s;
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
		llint qu;
		printf("Test %lld:\n",o);
		while(k>0)
		{
			scanf("%lld",&qu);
			if(qu == 0)
			{
				llint a=query(1,0,n-1);
				if(a == 0)
					printf("YES\n");
				else
					printf("NO\n");
			}
			else
				update(qu-1);
			k--;
		//for(int i=0;i<8;i++)
		//	cout << i << " " << tree[i].opening<< " " <<tree[i].closing <<endl;
		}
		o++;
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
	for(llint i=n-1;i>=0;i--)
	{
		int temp = min(tree[2*i].opening,tree[2*i+1].closing );
		tree[i].opening = maxi(0,tree[2*i].opening + tree[2*i+1].opening - temp);
		tree[i].closing = maxi(tree[2*i].closing + tree[2*i+1].closing - temp,0);
		tree[i].l = tree[2*i].l;
		tree[i].r = tree[2*i+1].r;
	}
}
void update(llint id)
{
	if(tree[n+id].opening > 0)
	{
		tree[n+id].opening -= 1;
		tree[n+id].closing += 1;
	}
	else
	{
		tree[n+id].opening += 1;
		tree[id+n].closing -= 1;
	}
	id = id+n;
	id= id>>1;
	while(id>0)
	{
		int temp = min(tree[2*id].opening,tree[2*id+1].closing);
		tree[id].opening = maxi(tree[2*id].opening + tree[2*id+1].opening - temp,0);
		tree[id].closing = maxi(tree[2*id].closing + tree[2*id+1].closing - temp,0);
		id=id/2;
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
		return query(2*id,l,tree[2*id].r) + query(2*id+1,tree[2*id+1].l,r);
}



