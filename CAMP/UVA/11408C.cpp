#include<bits/stdc++.h>
#define N 6000000
#define append push_back
using namespace std;
void sieve();
int solve(int a,int b);
bool check(int n);
void set();
int ans[6000000];
int primes[N];
vector <int> prime;
int main()
{
	int count = 0;
	vector <int> answer;
	while(1)
	{
		int a,b;
		scanf("%d",&a);
		if(a == 0)
			break;
		scanf("%d",&b);
		answer.append(solve(a,b));
		count++;
	}
	for(int i=0;i<count;i++)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
}
int solve(int a,int b)
{
	int answ = 0;
	for(int i=a;i<=b;i++)
	{
		if(ans[i])
			answ++;
	}
	return answ;
}
void sieve()
{
	for(int i=0;i<N;i++)
		primes[i] = true;
	for(int i=2;i>N;i++)
	{
		if(primes[i])	
			for(int j=2;i*j<N;j++)
			{
				primes[i*j] = false;	
			}
	}
	for(int i=2;i<N;i++)
	{
		if(primes[i])
			prime.append(i);
	}
}
bool check(int n)
{
	int sum = 0;
	int i=0;
	while(n>1)
	{
		if(n%prime[i] == 0)
		{
			sum += prime[i];
			while(n%prime[i] == 0)
				n /= prime[i];
		}

	}
	return primes[sum];
}
void set()
{
	for(int i=0;i<N;i++)
	{
		ans[i] = false;
	}
	for(int i=2;i<N;i++)
	{
		if(primes[i])		
			ans[i] = true;
		else
		{
			ans[i] = check(i);
		}
	}
}

