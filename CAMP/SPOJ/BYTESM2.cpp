#include<bits/stdc++.h>
#define append push_back
using namespace std;
int arr[101][101];
int dp[101][101];
int solve(int i,int j);
int x,y;
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		memset(arr,0,sizeof(arr));
		memset(dp,-1,sizeof(dp));
		scanf("%d%d",&x,&y);
		for(int i=0;i<x;i++)
		{
			for(int k=0;k<y;k++)
			{
				scanf("%d",&arr[i][k]);
			}
		}
		dp[0][0] = arr[0][0];
		int ans = INT_MIN;
		for(int i=0;i<y;i++)
		{
			ans = max(ans,solve(x-1,i));
		}
		printf("%d\n",ans);
		//for(int i=0;i<x;i++)
		//{
		//	for(int j=0;j<y;j++)
		//		printf("%d ",dp[i][j]);
		//	printf("\n");
		//}
	}

	return 0;
}
int solve(int i,int j)
{
	if(dp[i][j] != -1)
		return dp[i][j];
	else
	{
		if(i!=0 && j==0)
		{
			dp[i][j] = arr[i][j] + max(solve(i-1,j),solve(i-1,j+1));
		}
		else if(j == y-1 && i!=0)
		{
			dp[i][j] =  arr[i][j] + max(solve(i-1,j-1),solve(i-1,j));
		}
		else if(i == 0)
		{
			dp[i][j] = arr[i][j];
		}
		else
		{
			dp[i][j] = arr[i][j] + max(solve(i-1,j-1),max(solve(i-1,j),solve(i-1,j+1)));
		}
		return dp[i][j];
	}
}





