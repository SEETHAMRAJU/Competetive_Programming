#include<bits/stdc++.h>
#define append push_back
using namespace std;
int a[1001];
int b[1001];
int c[1001];
map<int,vector<int>>p;
bool bfs(int n,int s);
int main()
{
	int n,s;
	scanf("%d %d",&n,&s);
	for(int i=1;i<=n;i++){vector<int>o;p[i]=o;}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	if(a[0] != 1){printf("NO\n");return 0;}
	if(a[s-1] == b[s-1] && a[s-1] == 0){printf("NO\n");return 0;}
	int cur = 0;
	for(int i=cur+1;i<n;i++)
	{
		if(a[i] == 1)
		{
			p[cur+1].append(i+1);
			cur = i;
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		if(b[i] == 1)
		{
			cur = i;
			break;
		}
	}
	for(int i=cur-1;i>=0;i--)
	{
		if(b[i] == 1)
		{
			
			p[cur+1].append(i+1);
			cur = i;
		}
	}
	bool ans = bfs(1,s);
	if(ans)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
bool bfs(int n,int s)
{
	deque<int>q;
	q.push_back(n);
	while(!q.empty())
	{
		int u = q.back();
		q.pop_back();
		c[u] = 1;
		for(int i=0;i<p[u].size();i++)
		{
			if(c[p[u][i]] == 0)
			{q.push_back(p[u][i]);
				c[p[u][i]] = 2;
				if(s == p[u][i])
					return true;}
		}
	}
	return false;
	
}




