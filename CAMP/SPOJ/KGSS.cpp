#include<bits/stdc++.h>
#define append push_back
#define ll long long int
#define SIZE 7000000
using namespace std;
struct node 
{
	ll l,r;
	ll data,maxtill;
};
struct node tree[SIZE];
struct node query(ll id,ll l,ll r);
ll maxi(ll a,ll b);
void build(vector<ll>q,ll N);
void update(ll id,ll x);
int main()
{
	ll l,r,m,temp,n;
	ll N =1;
	scanf("%lld",&n);
	vector<ll>q;
	for(ll i=0;i<n;i++)
	{
		scanf("%lld",&temp);
		q.append(temp);
	}
	while(N<n)
		N = N*2;
	build(q,N);
	scanf("%lld",&m);
	char p;
/*	for(int i=0;i<16;i++)
	{

		cout << i << " " << tree[i].l << "<->"<<tree[i].r<< " " << tree[i].maxtill << " " << tree[i].data << endl;
	}*/
	for(ll i=0;i<m;i++)
	{
		cin >> p >> l >> r;
		if(p=='Q')
		{
			struct node p = query(1,l-1,r-1);
			printf("%lld\n",p.data);
		}
		else
			update(N+l-1,r);
	}
	return 0;
}

void build(vector<ll>q,ll N)
{
	for(ll i=0;i<q.size();i++)
	{
		tree[i+N].data = q[i];
		tree[i+N].maxtill = q[i];
		tree[i+N].r = i;
		tree[i+N].l = i;
	}
	for(ll i=q.size();i<N;i++)
	{
		tree[i+N].data = INT_MIN;
		tree[i+N].maxtill = INT_MIN;
		tree[N+i].r = i;
		tree[N+i].l = i;
	}
	for(ll i=N-1;i>0;i--)
	{
		tree[i].r = tree[2*i+1].r;
		tree[i].l = tree[2*i].l;
		tree[i].data = maxi(tree[2*i].maxtill + tree[2*i+1].maxtill,maxi(tree[2*i+1].data,tree[2*i].data));
		tree[i].maxtill = maxi(tree[2*i+1].maxtill,tree[2*i].maxtill);
	}
}
void update(ll id,ll x)
{
	tree[id].data = x;
	tree[id].maxtill = x;
	id = id/2;
	while(id>0)
	{
		tree[id].data = maxi(tree[2*id].data ,maxi(tree[2*id+1].data,tree[2*id+1].maxtill + tree[2*id].maxtill));
		tree[id].maxtill = maxi(tree[2*id].maxtill,tree[2*id+1].maxtill);
		id /= 2;
	}
}
struct node query(ll id,ll l,ll r)
{
	if(tree[id].r == r && tree[id].l == l)
		return tree[id];
	else if(tree[2*id].r < l)
		return query(2*id+1,l,r);
	else if(tree[2*id+1].l > r)
		return query(2*id,l,r);
	else
	{
		struct node *temp = new struct node;
		struct node a,b;
		a = query(2*id,l,tree[2*id].r);
		b = query(2*id+1,tree[2*id+1].l,r);
		temp->data = maxi(a.maxtill + b.maxtill,maxi(b.data,a.data));
		temp->maxtill = maxi(a.maxtill,b.maxtill);
		return *temp;
	}
}
ll maxi(ll a,ll b)
{
	if(b>a)
		return b;
	return a;

}
