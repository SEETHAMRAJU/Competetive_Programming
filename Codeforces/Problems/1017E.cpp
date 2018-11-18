#include<bits/stdc++.h>
#define append push_back
#define M 4294967296
#define N 100000
#define llint long long int
using namespace std;
void sieve();
llint f(llint n);
llint solve(llint n);
llint elogx(llint n);
bool primes[N];
vector <llint> prime;
llint A,B,C,D;
int main()
{
	llint n;
	sieve();
	scanf("%lld%lld%lld%lld%lld",&n,&A,&B,&C,&D);
/*
	for(int i=0;i<100;i++)
		printf("%lld ",prime[i]);*/
	printf("%lld\n",solve(n));
	return 0;
}
void sieve()
{
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
llint solve(llint n)
{
	llint res = 0;
	for(llint i=2;i<=n;i++)
		res += (elogx(i))%M;
	return res%M;
}
llint elogx(llint n)
{
	llint ans = 0;
	int i=0;
	printf("\n");
	printf("n->%lld \n",n);
	while(n>1 && i <prime.size())
	{
		llint a1 = 0;
		printf("p-> %lld ",prime[i]);
		while(n%prime[i] == 0)
		{
			n = n/prime[i];
			a1++;
		}
		printf(" %lld\n",a1);
		ans += (a1*(f(prime[i])))%M;
		i++;
	}
	return ans%M;
}
llint f(llint x)
{
	return ((A*(((x*x)%M)*x))%M + (B*(x*x))%M + (C*x)%M + D%M)%M;
}

