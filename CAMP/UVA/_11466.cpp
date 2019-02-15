#include<bits/stdc++.h>
#define append push_back
#define ll long long int
#define SIZE 10000000
using namespace std;
bool p[SIZE];
vector<ll>prime;
void sieve();
ll solve(ll n);
int main()
{
	ll  n;
	sieve();
	while(true)
	{
		cin >> n;
		if(n == 0)
			break;
		ll answer = solve(n);
		cout << answer << endl;
	}
	return 0;
}
void sieve()
{
	memset(p,true,sizeof(p));
	for(int i=2;i<SIZE;i++)
	{
		if(p[i])
		{
			for(int j=2;i*j<SIZE;j++)
			{
				p[i*j] = false;
			}
		}	
	}
	for(int i=2;i<SIZE;i++)
	{
		if(p[i])
			prime.append(i);
	}
}
ll solve(ll n)
{
	int i=0;ll cur;
	if(p[n])
		return -1;
	while(prime[i]<=n && n>1 && i<prime.size())
	{
		cur = prime[i];
		while(n%cur == 0)
			n = n/cur;
		i++;
	}
	if(n<=1)
	{
		return cur;
	}
	return -1;
}
