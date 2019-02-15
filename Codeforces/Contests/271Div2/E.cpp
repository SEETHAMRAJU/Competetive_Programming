#include<bits/stdc++.h>
#define append push_back
#define ll long long int
#define SIZE 1000000
using namespace std;
ll dp[SIZE],arr[SIZE];
ll ans[SIZE];
ll n,h,d;
ll solve(ll x);
ll maxi(ll b,ll a);
int main()
{
	memset(dp,-1,sizeof(dp));
	cin >> n >> d;
	for(int i=0;i<n;i++)
		cin >> arr[i];
	ll answer = INT_MIN;ll answeri = -1;
	for(int i=0;i<n;i++)	
	{
		if(dp[i] == -1)
			solve(i);
		if(dp[i]>answer)
		{
			answeri = i;
			answer = dp[i];
		}
	}
	cout << ++dp[answeri] << endl;
	int answer1 = answeri;
	cout << "1 ";
	while(answer1<n-1 && answer1>=0)
	{
		cout << ans[answer1]+1 << " ";
		answer1 = ans[answer1];
	}
	cout<<endl;
	return 0;
}
ll solve(ll x)
{
	if(x == n-1)
		return 0;
	if(dp[x] != -1)
		return dp[x];
	ll ans1=INT_MIN,ansi,temp;
	ansi = -1;
	for(int i=x+1;i<n;i++)
	{
		if(abs(arr[i]-arr[x])>=d)
		{
			temp = 1+solve(i);
			if(ans1<temp)
			{
				ans1 = temp;
				ansi = i;
			}
		}
	}
	dp[x] = maxi(-1,ans1);
	ans[x] = maxi(-1,ansi);
	return dp[x];
}
ll maxi(ll a,ll b)
{
	if(b>a)
		return b;
	return a;

}

