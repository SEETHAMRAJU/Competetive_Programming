#include<bits/stdc++.h>
#define append push_back
#define SIZE 2000000
//#define llint long long int
using namespace std;
struct node 
{
	int prefixsum,suffixsum,maxsum,l,r,sum;
};
struct node tree[SIZE];
void build(vector<int> q,int n);
int query(int id,int l,int r);
int main()
{
	vector<int>q;
	int t,n,temp;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		q.append(temp);
	}
	
	int ans = 1;
	while(ans<n)
		ans = ans*2;
	n = ans;
	build(q,n);
	scanf("%d",&t);
	int l,r;
	for(int i=0;i<t;i++)
	{
		scanf("%d %d",&l,&r);
		printf("%d\n",query(1,l-1,r-1));
	}
	return 0;
}
void build(vector<int>q,int n)
{
	for(int i=0;i<q.size();i++)
	{
		tree[n+i].l= i;
		tree[n+i].r= i;
		tree[n+i].suffixsum = q[i];
		tree[n+i].prefixsum = q[i];
		tree[n+i].maxsum = q[i];
		tree[n+i].sum = q[i];
	}
	for(int i=q.size();i<n;i++)
	{
		tree[n+i].l = i;
		tree[n+i].r = i;
		tree[n+i].suffixsum = INT_MIN + 16000;
		tree[n+i].prefixsum = INT_MIN + 16000;
		tree[n+i].maxsum = INT_MIN + 16000;
		tree[n+i].sum = INT_MIN + 16000;
	}
	for(int i=n-1;i>0;i--)
	{
		tree[i].suffixsum = max(tree[2*i+1].suffixsum,max(tree[2*i+1].sum + tree[2*i].suffixsum,tree[2*i+1].sum));
		tree[i].prefixsum = max(tree[2*i].prefixsum,max(tree[2*i].sum,tree[2*i].sum + tree[2*i+1].prefixsum));
		tree[i].sum = tree[2*i].sum + tree[2*i+1].sum;
		tree[i].maxsum = max(tree[2*i].maxsum,max(tree[2*i+1].maxsum,tree[2*i].suffixsum + tree[2*i+1].prefixsum));
		tree[i].l = tree[2*i].l;
		tree[i].r = tree[2*i+1].r;
	}
}
int query(int id,int l,int r)
{
	if(tree[id].l == l && tree[id].r == r)	
		return tree[id].maxsum;
	else if(tree[2*id].r < l)
		return query(2*id+1,l,r);
	else if(tree[2*id+1].l > r)
		return query(2*id,l,r);
	else
	{
		int a = query(2*id,l,tree[2*id].r);
		int b= query(2*id+1,tree[2*id+1].l,r);
		return max(a,max(b,a+b));
	}
}
