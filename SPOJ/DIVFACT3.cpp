#include<bits/stdc++.h>
#define append push_back
#define llint long long int
#define N 9000000
using namespace std;
llint M;
vector<int>prime;
bool primes[N];
void sieve();
llint solve(llint n);
int main()
{
	sieve();
	llint t,n;
	scanf("%lld",&t);
	vector<llint>answer;
	for(int i=0;i<t;i++)
	{
		scanf("%lld %lld",&n,&M);
		answer.append(solve(n));
	}
	for(llint i=0;i<t;i++)
	{
		printf("%lld\n",answer[i]);
	}

	return 0;
}
void sieve()
{
	memset(primes,true,sizeof(primes));
	for(llint i=2;i<N;i++)
	{
		if(primes[i])
		{
			for(llint j=2;i*j<N;j++)
			{
				primes[i*j] = false;
			}
		}
	}
	for(llint i=2;i<N;i++)
	{
		if(primes[i])
			prime.append(i);
	}
}
llint solve(llint n)
{
	llint total = 1;
	for(llint i=0;prime[i]<=n;i++)
	{
		llint temp = n;
		llint cnt = 1;
		llint a = prime[i];
		llint ans = 0;
		while(cnt<15)
		{
			llint temp2 = temp/a; 
			if(temp2 > 0)
				ans = (ans + temp2)%M;
			else
				break;
			a = a*prime[i];
		}
		total = (total*(ans+1))%M;
	}
	return total;
}
