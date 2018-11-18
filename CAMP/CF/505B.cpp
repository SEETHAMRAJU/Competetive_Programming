#include<bits/stdc++.h>
#define append push_back
#define N 101
using namespace std;
int colo[N];
int c[N];
int ans[N][N];
int color[N][N];
int n,m,x,y,o,v;
int matrix[N][N];
bool dfs(int i,int j,int src);
int solve(int u,int r);
map<int,vector<int>>p;
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		vector<int>l;
		p[i] = l;
	}

	for(int i=0;i<m;i++)
	{
		scanf("%d%d%d",&x,&y,&o);
		color[o][y] = 1;
		color[o][x] = 1;
		if(ans[x][y] == 0)
		{
			p[x].append(y);
			p[y].append(x);
			ans[x][y] = 1;
			ans[y][x] = 1;
		}
		colo[o]=1;
	}
	int q,u;
	scanf("%d",&q);
	for(int i=0;i<q;i++)
	{
		scanf("%d%d",&u,&v);
		printf("%d\n",solve(u,v));
	}

	return 0;
}
int solve(int u,int r)
{
	int ans = -1;
	int count = 0;
	for(int i=1;i<=m;i++)
	{
		memset(c,0,sizeof(c));
		if(colo[i] == 1 && color[i][u] != 0)
		{
			bool temp = dfs(u,i,v);
			if(temp)
			{
				count++;
			}

		}
	}
	return count;
}

bool dfs(int s,int co,int src)
{
	c[s] = 1;
	if(s == src)
		return true;
	for(int i=0;i<p[s].size();i++)
	{
		if(c[p[s][i]] == 0 && color[co][p[s][i]] == 1)
		{
			if(dfs(p[s][i],co,src))
				return true;
		}
	}
	return false;
}
