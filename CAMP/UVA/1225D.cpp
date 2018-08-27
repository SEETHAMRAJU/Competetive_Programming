#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n;
	vector <vector <int,int>> ans;
	for(int i=0;i<n;i++)
	{
		int p;
		scanf("%d",&p);
		ans.append(solve(p));
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
vector <int,int> solve(int p)
{
	vector <int,int> q;
	for(int i=0;i<10;i++)
	{
		q.append(0);
	}
	for(int i=1;i<=p;i++)
	{
	
	}
}





