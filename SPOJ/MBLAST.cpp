#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
using namespace std;
int alpha(char p,char q)
{
	return abs(p - q);
}
int solve(int a,int b);
int dp[2001][2001];
string a,b;int k;
int main()
{
	memset(dp,-1,sizeof(dp));
	IOS;
	dp[0][0] = 0;
	cin >> a >> b >> k;
	for(int i=0;i<a.size()+1;i++)
		dp[i][0] = i*k;
	for(int j=0;j<b.size()+1;j++)
		dp[0][j] = k*j;
	cout << solve(a.size(),b.size()) << endl;
	return 0;
}
int solve(int m,int n)
{
	for(int i=1;i<m+1;i++)
	{
		for(int j=1;j<n+1;j++)
		{
			if(a[i-1] == b[j-1])
				dp[i][j] = dp[i-1][j-1];
			else
				dp[i][j] = min(alpha(a[i-1],b[j-1])+dp[i-1][j-1],k+min(dp[i-1][j],dp[i][j-1]));
		}
	}
	return dp[m][n];
}
