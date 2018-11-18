#include<bits/stdc++.h>
#define append push_back
#define N 100000
using namespace std;
int dist[N];
int c[N];
map<int,vector<int>>p;
void dfs(int s);
int main()
{
	int x,y,n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		vector<int>o;
		p[i]= o;
	}
	for(int i=0;i<n-1;i++)
	{
		scanf("%d%d",&x,&y);
		p[x].append(y);
		p[y].append(x);
	}
	dist[1] = 0;
	dfs(1);
	int maxi=0;
	for(int i=1;i<=n;i++)
	{
		if(dist[maxi] < dist[i])
			maxi = i;
	}
	memset(dist,0,sizeof(dist));
	memset(c,0,sizeof(c));
	dfs(maxi);
	int answer = INT_MIN;
	for(int i=1;i<=n;i++)
		answer = max(answer,dist[i]);
	printf("%d\n",answer);
	return 0;
}
void dfs(int s)
{
	c[s] = 1;
	for(int i=0;i<p[s].size();i++)
	{
		if(c[p[s][i]] == 0)
		{
			c[p[s][i]] = 1;
			dist[p[s][i]] = 1+ dist[s];
			dfs(p[s][i]);
		}
	}
}




