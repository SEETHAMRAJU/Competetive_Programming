#include<bits/stdc++.h>
#define llint long long int
#define append push_back
#define N 600000
using namespace std;
llint primes[600000];
vector <llint> prime;
void sieve();
llint sigma(llint p,llint a);
llint solve(llint n);
int main()
{
	llint temp,n;
	scanf("%lld",&n);
	vector <llint> answer;
	sieve();
	for(llint i=0;i<n;i++)
	{
		scanf("%lld",&temp);
		answer.append(solve(temp));
	}
	for(llint i=0;i<n;i++)
	{
		printf("%lld\n",answer[i]);
	}
	return 0;
}
void sieve()
{
	for(llint i=0;i<N;i++)
		primes[i] = true;
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
	llint l = n;
	llint sum = 1;
	for(llint i=0;n>1 && i < prime.size();i++)
	{
		if(n%prime[i] == 0)
		{
			int b = 0;
			while(n%prime[i] == 0)
			{
				n = n/prime[i];
				b++;
			}
			sum *= sigma(prime[i],b);
		}
	}
	return sum - l;
}
llint sigma(llint p,llint a)
{
	llint tot = 0;
	tot = (pow(p,a+1) - 1);
	tot = tot/(p-1);
	return tot;
}

