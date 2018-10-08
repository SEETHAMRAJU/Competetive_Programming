#include<bits/stdc++.h>
#define append push_back
#define N 1000000
using namespace std;
int c[N];
map<int,set<int>> q;
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int cmax = INT_MIN;
	int cmin = INT_MAX;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&c[i+1]);
		cmax = max(cmax,c[i+1]);
		cmin = min(cmin,c[i+1]);
	}
	for(int i=cmin;i<=cmax;i++)
	{
		set<int> o;
		q[i] = o;
	}
	int x,y;
	for(int i=0;i<m;i++)
	{
		scanf("%d%d",&x,&y);
		if(c[x] != c[y])
		{
			q[c[x]].insert(c[y]);
			q[c[y]].insert(c[x]);
		}
	}
	int ans = cmin;
	for(int i=cmin;i<=cmax;i++)
	{
		if(q[ans].size() < q[i].size())
		{
			ans = i;
		}
	}
	printf("%d\n",ans);
	return 0;
}





