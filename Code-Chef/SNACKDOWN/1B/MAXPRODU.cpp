#include<bits/stdc++.h>
#define append push_back
#define M 1000000007
#define ll long long
using namespace std;
ll solve(ll n,ll k);
int main()
{
	ll t,n,k;
	scanf("%lld",&t);
	for(ll i=0;i<t;i++)
	{
		scanf("%lld %lld",&n,&k);
		printf("%lld\n",solve(n,k));
	}
	return 0;
}	
ll solve(ll n,ll k)
{
	ll req = (k*(k+1))/2;	
	ll a,b,c;
	vector<ll> q;
	if(n<req)
		return -1;
	else if(n == req)
		return 0;
	else	
	{
		a = n-req;	
		b = a/k;
		c = a%k;	
		for(ll i=1;i<=k;i++)	
			q.append(i+b);
		for(ll i=k-1;c>0 && i>=0;i--)
		{
			q[i] += 1;	
			c--;
		}	
		ll ans = 1;
		for(ll i=0;i<k;i++)
			ans = (((ans*q[i])%M)*(q[i]-1))%M;					
		return ans;	
	}		
}
