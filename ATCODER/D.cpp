
#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 9000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
vector<ll>prime;
void sieve();
ll solve(ll g);
ll gcd(ll x,ll y);

int main()
{
	IOS;
	sieve();
	ll x,y;
	cin >> x >> y;
	ll g;
	g = gcd(x,y);
	
	printf("%lld\n",1+solve(g));
	return 0;
}
ll gcd(ll x,ll y)
{
	ll p = max(x,y);
	y = min(x,y);
	x = p;
	while(y>0)
	{
		p = x%y;
		x = y;
		y = p;
	}
	return x;
}
ll solve(ll x)
{
	int i=0;
	int count =0;
	while(x>0 && i<prime.size() && x>=prime[i])
	{
		if(x%prime[i]==0)
		{	
			while(x%prime[i]==0)
				x=x/prime[i];
			count++;
		}
		i++;
	}
	return count;
}
void sieve()
{
	bool arr[N];
	memset(arr,true,sizeof(arr));
	for(int i=2;i<N;i++)
	{
		if(arr[i])
		{
			for(int j=2;i*j<N;j++)
				arr[i*j]=false;
		}
	}
	for(int i=2;i<N;i++)
	{
		if(arr[i])
			prime.append(i);
	}
}
