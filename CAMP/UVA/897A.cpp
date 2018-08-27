#include<bits.stdc++.h>
using namespace std;
int main()
{
	freopen("test.txt","r",stdout);	
	int n,t=0;
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n == 0)
			break;		
		ans.append(solve(n));
		t++;
	}
	for(int i=0;i<t;i++)
	{
		printf("%d\n",ans[i]);		
	}
	return 0;
}
void sieve()
{
	for(int i=2;i<N;i++)
	{
		primes[i] = true;
	}
	for(int i=2;i<N;i++)
	{
		for(int j=2;i*j<N;j++)
		{
			primes[i*j] = false;
		}
	}
	for(int i=0;i<N;i++)
	{
		if(primes[i])
			prime.append(i);
	}
	for(int i=N;i<N*10;i++)
	{
		if(check(i))
			prime.append(i);
	}
}
bool check(int n)
{
	for(int i=0;prime[i]*prime[i] <= n;i++)
	{
		if(n%prime[i] == 0)
			return false;
	}	
	return true;
}
int solve(int n)
{
	int p = next_permutation(n);
	while(next_permutation(n))
	{
		
	}	
}
