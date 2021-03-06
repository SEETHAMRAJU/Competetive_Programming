#include<bits/stdc++.h>
#define append push_back
#define llint long long int
#define N 100001
#define M 1000000007
using namespace std;
map<int,int>p;
vector<int>prime;
bool primes[N];
int spf[N];
void sieve();
llint solve(int n);
int main()
{
	sieve();
	int t,n;
	scanf("%d",&t);
	vector<llint>answer;
	for(int i=0;i<t;i++)
	{
		scanf("%d",&n);
		answer.append(solve(n));
	}
	for(int i=0;i<t;i++)
	{
		printf("%lld\n",answer[i]);
	}

	return 0;
}
void sieve()
{
	spf[1] = 1;
	spf[2] = 2;
	memset(primes,true,sizeof(primes));
	for(int i=2;i<N;i++)
	{
		if(primes[i])
		{
			for(int j=2;i*j<N;j++)
			{
				primes[i*j] = false;
			}
		}
	}
	for(int i=2;i<N;i++)
	{
		if(primes[i])
			prime.append(i);
	}
}
llint solve(int n)
{
	llint total = 1;
	for(int i=0;prime[i]<=n;i++)
	{
		int temp = n;
		int cnt = 1;
		int a = prime[i];
		int ans = 0;
		while(cnt<15)
		{
			int temp2 = temp/a; 
			if(temp2 > 0)
				ans = ans + temp2;
			else
				break;
			a = a*prime[i];
		}
		total = (total*(ans+1))%M;
	}
	return total;
}
