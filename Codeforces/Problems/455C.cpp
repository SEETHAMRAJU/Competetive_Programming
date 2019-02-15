
#include<bits/stdc++.h>
#define append push_back
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
ll arr[N+1],dp[N+1],ans[N+1],cnt[N+1];
int main()
{
	IOS;
	ll n;
	cin >> n;
	for(ll i=0;i<n;i++)
	{
		cin >> arr[i];
		cnt[arr[i]]++;
	}
	ans[0] =0;
	ans[1] = cnt[1];
	for(ll i=2;i<=N;i++)
	{
		ans[i] = max(ans[i-1],ans[i-2]+cnt[i]*i);
		//the first one is if we choose the i-1 th element then we won't choose this one else the second one 
	}
	cout << ans[N] << endl;
	return 0;
}
