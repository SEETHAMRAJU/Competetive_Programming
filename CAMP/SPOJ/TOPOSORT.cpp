#include<bits/stdc++.h>
#define append push_back
#define N 10001
using namespace std;
int deg[N];
int c[N];
int a,b;
list <int> toposort;
map<int,vector<int>> p;
void solve(int s);
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=N;i++)
	{
		vector <int> o;
		p[i] =o;
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d %d",&a,&b);
		deg[b]++;
		p[a].append(b);
	}
	int s = 1;
	vector<pair<int,int>> to;
	for(int i=1;i<=n;i++)
	{
		to.append(make_pair(deg[i],i));	
			
	}
	sort(to.begin(),to.end());
	vector <int> answer;
	for(int i=0;i<to.size();i++)
	{

		if(c[to[i].second] != 1)
		{
			solve(to[i].second);
			int j=0;
			while(toposort.size() != 0)
			{
				answer.append(toposort.front());
				toposort.pop_front();
			}
		}
	}
	vector <int>::iterator itr;
	for(itr = answer.begin();itr != answer.end();itr++)
		printf("%d ",*itr);
	return 0;
}
void solve(int s)
{
	c[s] = 1;
	for(int i=0;i<p[s].size();i++)
	{
		if(c[p[s][i]] != 1)
			solve(p[s][i]);
		else if(pi[] )
	}
	toposort.push_front(s);
}




