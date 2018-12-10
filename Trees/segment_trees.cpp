#include<bits/stdc++.h>
#define append push_back
#define SIZE 524288
using namespace std;
struct node
{
	//data members
	int l,r;
	int sum;
};
void buildTree(vector<int> q,int n);
void query(int id,int x,int y);
void update(int id);
int main()
{


	return 0;
}
void buildTree(vector<int>q,int n)
{
	tree = new node [SIZE];	
	for(int i=0;i<n;i++)	
	{
		tree[n+i].data = q[i];
		//set data members
	}
	for(int i=n-1;i>=0;i--)
	{
		tree[i].data = tree[2*i].data + tree[2*i+1].data;
	}
}
void query(int id,int l,int r)
{
	if(l==tree[id].l && r == tree[id].r)
		return tree[id].data;
	else if(l>tree[2*id].r)
		return query(2*id+1,l,r);
	else if(r<tree[2*id+1].l)
		return query(2*id,l,r);
	else 
	{
		return operate(query(2*id,l,tree[2*id].r) , query(2*id,tree[id*2+1],r));
	}
}
void update(int x,int data)
{
	tree[n+x-1].data = data;
	i = n-1+x;
	while(i>=0)
	{
		tree[i].data = operate(data,tree[i*2+1].data);
		i>>1;
	}
}



