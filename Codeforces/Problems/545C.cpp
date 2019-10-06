#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
ll x[N],h[N],check[N];
int main()
{
	IOS;
	ll n;
	cin >> n;
	for(ll i=0;i<n;i++)
	{
		cin >> x[i] >> h[i];
	}
	ll ans = 1;
	check[0] = -1;
	ll latest = x[0];
	for(ll i=1;i<n-1;i++)
	{
		if(x[i] - x[i-1] > h[i] && (check[i-1] != 1 || x[i] - latest > h[i]) )
		{
			check[i] = -1;
			ans++;
			latest = x[i];
		}
		else if(x[i+1] - x[i] > h[i])
		{
			check[i] = 1;
			ans++;
			latest = x[i] + h[i];
		}
		else
		{
			check[i] = 0;	
			latest = x[i];
		}
	}
	cout << min(ans+1,n) <<  endl;
	return 0;
}
