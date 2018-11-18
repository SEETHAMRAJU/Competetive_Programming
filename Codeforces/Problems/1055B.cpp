#include<bits/stdc++.h>
#define N 1000000
#define append push_back
using namespace std;
int n,m,l,p,d,t;
int arr[N];
int q[N];
vector<pair<int,int>>p;
int main()
{
	scanf("%d%d%d",&n,&m,&l);
	int total = 0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>l)
		{
			q[i] = 1;
		}	
	}
	int l=0;
	for(int i=0;i<n;i++)
	{
		if(q[i] == 1)
		{l = i;break;}
	}
	for(int i=l+1;i<n;i++)
	{
		if(q[i] != 1)
		{
			
		}
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d",&t);
		if(t != 0)
		{
			scanf("%d%d",&p,&d);
		}
		else
			cout << q.size() << endl;
	}
	return 0;
}

