#include<bits/stdc++.h>
#define append push_back
using namespace std;
int dp[2001][2001];
int temp2,temp1;
int knapsack(int weight,int n);
vector<int>wt,val;
int main()
{
	int s,n;
	memset(dp,-1,sizeof(dp));
	scanf("%d%d",&s,&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&temp1,&temp2);
		wt.append(temp1);
		val.append(temp2);
	}
	dp[0][0] = 0;
	int answer = knapsack(s,n);
	printf("%d\n", answer);	
	return 0;
}
int knapsack(int weight,int n)
{
	if(weight<=0 || n<=0)
	{return dp[0][0];}
	if(dp[weight][n] != -1)
		return dp[weight][n];
	if(weight<wt[n-1])
	{
		dp[weight][n] = knapsack(weight,n-1);
		return dp[weight][n];
	}
	else 
	{
		dp[weight][n] = max(val[n-1] + knapsack(weight-wt[n-1],n-1),knapsack(weight,n-1));
		return dp[weight][n];
	}
}





