#include<bits/stdc++.h>
#define N 1000000
#define append push_back
using namespace std;
map<int,vector<int>> p;
int cats[N];
//int rest[N];
int maxtill = INT_MIN;
int c[N];
int pi[N];
int deg[N];
int consecutive[N];
void DFS(int s);
int main()
{
	int n,m,x,y;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%d",&cats[i+1]);
	for(int i=1;i<=n;i++)
	{
		vector<int> o;
		p[i] = o;
	}
	for(int i=1;i<n;i++)
	{
		scanf("%d%d",&x,&y);
		p[x].append(y);
		p[y].append(x);
		deg[y]++;
		deg[x]++;
	}
	int answer = 0;
	if(cats[1] == 1)
		consecutive[1] = 1;
	DFS(1);
	for(int i=2;i<=n;i++)
	{
		printf("%d->%d\n",i,consecutive[i]);
		if(consecutive[i] <= m && deg[i] == 1)
				answer++;
	}
	printf("%d\n",answer);
	return 0;
}
void DFS(int s)
{
	c[s] = 1;
	for(int i=0;i<p[s].size();i++)
	{
		if(c[p[s][i]] != 1)
		{
			c[p[s][i]] = 1;
			pi[p[s][i]] = s;
			if(cats[p[s][i]] != 1)
			{
				if(cats[pi[p[s][i]]] == 1)
				{
					consecutive[p[s][i]] = max(consecutive[s],maxtill);
					maxtill = max(maxtill,consecutive[p[s][i]]);
				}
				else
					consecutive[p[s][i]] = maxtill;
			}
			else
			{
				if(cats[s] == 1)
					consecutive[p[s][i]] = 1+max(maxtill,consecutive[s]);
				else
					consecutive[p[s][i]] = maxtill;
			}
			
			DFS(p[s][i]);
		}
	}
}
