#include<bits/stdc++.h>
#define append push_back
using namespace std;
int solve(int i,int n, int q);
int main()
{
	int t,n,g,Q,I;	
	scanf("%d",&t);
	vector <vector <int>> ans;
	for(int i=0;i<t;i++)
	{
		vector <int> q;
		scanf("%d",&g);
		for(int j=0;j<g;j++)
		{
			scanf("%d%d%d",&I,&n,&Q);
			q.append(solve(I,n,Q));
		}
		ans.append(q);
	}
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<ans[i].size();j++)
			printf("%d\n",ans[i][j]);
	}
	return 0;
}
int solve(int i,int n,int q)
{
	if(n%2 == 0)
	{
		return n/2;
	}	
	else
	{
		int t,h;
		t = n/2;
		h = n/2;
		if(i == 1)
			t++;		
		else
			h++;
		if(q == 1)
			return h;
		else
			return t;	
	}
	
}
