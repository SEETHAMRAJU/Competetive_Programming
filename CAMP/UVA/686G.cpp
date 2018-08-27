#include<bits/stdc++.h>
#define append push_back
#define N 1000000
using namespace std;
void sieve();
int solve(int n);
int primes[1000001];
vector <int> prime;
int main()
{
	sieve();
	int count = 0;
	int n;
	vector <int> ans;
	while(1)
	{
		scanf("%d",&n);
		if(n == 0)
			break;
		ans.append(solve(n));
		count++;
	}
	int i=0;
	while(count--)
	{
		printf("%d\n",ans[i]);
		i++;
	}
	return 0;
}
void sieve()
{
	for(int i=0;i<N;i++)
	{
		primes[i] = true;
	}
	for(int i=2;i<N;i++)
	{
		if(primes[i])
		{
			for(int j=2;j*i<N;j++)
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
int solve(int n)
{
	int i = 0;
	int count = 0;
	for(;i<prime.size();i++)
	{
		if(prime[i] > n)
			break;
	}
	int l,r;
	l = 0;
	r = i;
	while(l<=r)
	{
		if(prime[l] + prime[r] > n)
			r--;
		else if(prime[l] + prime[r] < n)
			l++;
		else
		{
			
			l++;
			r--;
			count++;
		}	
		//printf("%d %d %d\t",prime[l] + prime[r],prime[l],prime[r]);
	}
	return count;
}



