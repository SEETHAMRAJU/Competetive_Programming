#include<bits/stdc++.h>
#define append push_back
using namespace std;
void bfs(int src);
int s,f,g,u,d;
int c[1000001];
int dist[1000001];
int main()
{
	scanf("%d%d%d%d%d",&f,&s,&g,&u,&d);
	if(s == g)
	{
		printf("0\n");
		return 0;
	}
	if(d == 0)
	{
		if(s>g)
		{
			printf("use the stairs\n");
			return 0;
		}
	}
	if(u == 0)
	{
		if(s<g)
		{
			printf("use the stairs\n");
			return 0;
		}
	}
	bfs(s);
	if(dist[g] != 0)
	{
		printf("%d\n",dist[g]-1);
	}
	else
	{
		printf("use the stairs\n");
	}
	return 0;
}
void bfs(int src)
{
	queue<int> q;
	q.push(src);
	int nxt,prv;
	c[src] = 1;
	dist[src] = 1;
	int temp = 0;
	while(!q.empty())
	{
		src = q.front();
		q.pop();
		nxt = src+ u;
		prv = src-d;
		if(nxt <= f && c[nxt] != 1)
		{
			c[nxt] =1;
			dist[nxt] = dist[src] + 1;
			q.push(nxt);
		}
		if(prv >= 1 && c[prv] != 1)
		{
			c[prv] = 1;
			dist[prv] = dist[src] + 1;
			q.push(prv);
		}
		if(nxt == g || prv == g)
			return ;
	}
	return ;
}




