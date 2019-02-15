#include<bits/stdc++.h>
#define append push_back
#define ll long long int
#define SIZE 1000000
using namespace std;
ll solve(ll b,ll p,ll m)
{
	ll res = 1;
	while(p>0)
	{
		if(p&1 == 1)
			res = (res * (b%m))%m;
		b = (b*b)%m;
		p = p>>1;
	}
	return res;

}
int main()
{

	ll b,m,p;
	while(scanf("%lld",&b) != EOF)
	{
		scanf("%lld%lld",&p,&m);
		printf("%lld\n",solve(b,p,m));
	}
	return 0;
}





