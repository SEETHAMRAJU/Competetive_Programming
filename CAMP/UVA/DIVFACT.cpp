#include<bits/stdc++.h>
#define N 1000000
#define M 1000000007
#define append push_back
using namespace std;
vector <int> prime;
int primes[N];
void sieve();
int solve(int l);
int fact(int p);
int main()
{
	int t;
	sieve();
	scanf("%d",&t);
	vector <int> ans; 
	printf("%d\n",solve(t));
	/*for(int i=0;i<t;i++)
	{
		int p;
		scanf("%d",&p);
		ans.append(solve(p));
	}

	for(int i=0;i<t;i++)
	{
		printf("%d\n",ans[i]);
	}*/
	return 0;
}
int solve(int n)
{
	int ans =1;
	for(int i=0;n>1;i++)
	{
		int a=0;
		while(n%prime[i] == 0)
		{
			a++;
			n =n/ prime[i];
		}
		ans *= (a+1);
		ans = ans%M;
	}
	return ans;
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
			for(int j=2;i*j<=N;j++)
			{
				primes[i*j] = false;
			}
		}
	}
	for(int i=2;i<N;i++)
	{
		if(primes[i])
		{
			prime.append(i);
		}
	}
}




