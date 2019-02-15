#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll gcd(ll a,ll b);
ll C(ll n,ll r);
int main()
{
	ll r,n;
	while(true)
	{
		scanf("%lld%lld",&n,&r);
		if(n == 0 && r == 0)
			break;
		printf("%lld\n",C(n,r));
	}
	return 0;
}
ll gcd(ll a,ll b)
{
	while(a != 0)
	{
		ll temp = b%a;
		b =a;
		a = temp;
	}
	return b;
}
ll C(ll n,ll r)
{
	if(r > n- r)
		return C(n,n-r);
	ll ans = 1;
	ll temp=1;ll temp1;	
	for(ll i=n;i>n-r;i--)
	{
		ans *= i;
		temp *= (r-n+i);
//		cout << temp << " " << ans <<  << endl;
		temp1 = gcd(temp,ans);
		ans /= temp1;
		temp /=temp1;
	}
	ans /= temp;
	return ans;
}
