#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll maxi(ll a,ll b);
ll mini(ll a,ll b);
ll solve(ll a,ll b,ll& x,ll& y);
int main()
{
	ll a,b;
	while(scanf("%lld",&a)!=EOF)	
	{
		scanf("%lld",&b);
		ll x,y;
		ll g = solve(mini(a,b),maxi(a,b),x,y);
		printf("%lld %lld %lld\n",mini(x,y),maxi(x,y),g);
	}
	return 0;
}
ll solve(ll a,ll b,ll& x,ll& y)
{
	if(a == 0)
	{
		x = 0;
		y = 1;
		return b;
	}
	ll x1,y1;
	ll g = solve(b%a,a,x1,y1);
	x = y1 - (b/a)*x1;
	y = x1;
	return g;	
}
ll mini(ll a,ll b)
{
	if(a<b)
		return a;
	return b;
}
ll maxi(ll a,ll b)
{
	if(b>a)
		return b;
	return a;
}
