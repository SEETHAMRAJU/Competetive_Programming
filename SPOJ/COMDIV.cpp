#include<bits/stdc++.h>
#define N 1000000
#define append push_back
using namespace std;
int primes[N];
vector <int> prime;
void sieve();
int solve(int a,int b);
int nofdiv(int n);
int gcd(int a,int b);
int main()
{
	vector <int> ans;
	int t;
	sieve();
	scanf("%d",&t);
	//printf("%d\n",nofdiv(t));
	for(int i=0;i<t;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		ans.append(solve(a,b));
	}
	for(int i=0;i<t;i++)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
}
int solve(int a,int b)
{
	int p = gcd(a,b);
	return nofdiv(p);
}
int gcd(int a,int b)
{
	int p,q,temp;
	p = max(a,b);
	q = min(a,b);
	while(q != 0)
	{
		temp = q;
		q = p%q;
		p = temp;
	}
	return p;
}
int nofdiv(int n)
{
	int ans = 1;
	for(int i=0;n>1 ;i++)
	{
		int a = 0;
		while(n%prime[i] == 0)
		{
			a++;
			n = n/prime[i];
		}
		ans *= (a+1);
	}
	return ans;
}
void sieve()
{
	for(int i=2;i<N;i++)
	{
		primes[i] = true;
	}
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


