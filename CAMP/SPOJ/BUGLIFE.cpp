#include<bits/stdc++.h>
#define N 2001
#define append push_back
using namespace std;
int c[N];
int visited[N];
bool solve(int n,map<int,vector<int>> p);
int main()
{
	int t;
	scanf("%d",&t);
	vector <int> answer;
	for(int o=0;o<t;o++)
	{
		int n,m,a,b;
		scanf("%d %d",&n,&m);
		map<int,vector<int>> p;
		for(int i=1;i<=n;i++)
		{
			vector <int> o;
			p[i] = o;
		}
		for(int i=0;i<m;i++)
		{
			scanf("%d %d",&a,&b);
			p[a].append(b);
			p[b].append(a);
		}
		answer.append(solve(n,p));
	}
	for(int i=0;i<t;i++)
	{
		printf("Scenario #%d:\n",i+1);
		if(answer[i])
			printf("Suspicious bugs found!\n");
		else
			printf("No suspicious bugs found!\n");
	}
	return 0;
}
bool solve(int n,map<int,vector<int>> p)
{
	queue<int> q;
	memset(c,0,sizeof(c));
	memset(visited,0,sizeof(visited));
	for(int i=1;i<=n;i++)
	{
		if(visited[i] != 1)
		{		
			q.push(i);
			c[i] = 1;
			while(!q.empty())
			{
				
				int u = q.front();
				q.pop();
				if(visited[u] == 0)
				{
					visited[u] = 1;
					for(int j=0;j<p[u].size();j++)
					{
						if(c[p[u][j]] == 0)
						{
							c[p[u][j]] = -1*c[u];
							q.push(p[u][j]);						
						}
						else if(c[u] == c[p[u][j]])
						{
								return true;
						}
					}
				}
			}
		}
	}
	return false;
}
