#include<bits/stdc++.h>
#define append push_back
using namespace std;
int solve(string a,string b);
int mini(int x,int y,int z);
int dp[2005][2005];

int main()
{
	int t;
	scanf("%d",&t);
	string a,b;
	vector <int> answer;
	while(t>0)
	{
		cin >> a;
		cin >> b;
		answer.append(solve(a,b));
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		printf("%d\n",answer[i]);
	}
	
	return 0;
}
int solve(string a,string b)
{
	int m,n;
	m = a.size();
	n = b.size();
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i == 0)
				dp[i][j] = j;
			else if(j == 0)
				dp[i][j] = i;
			else if(a[i-1] == b[j-1])
				dp[i][j] = dp[i-1][j-1];
			else
			{
				dp[i][j] = 1+mini(dp[i][j-1],dp[i-1][j],dp[i-1][j-1]);
			}
		}
	}
	return dp[m][n];
}
int mini(int x,int y,int z)
{
	return min(x,min(y,z));
}



