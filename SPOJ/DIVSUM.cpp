#include<bits/stdc++.h>
#define append push_back
#define N 600000
using namespace std;
int primes[600000];
vector <int> prime;
void sieve();
int sigma(int p,int a);
int solve(int n);
int po(int x,int n); 
int main()
{
	int temp,n;
	scanf("%d",&n);
	vector <int> answer;
	sieve();
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		answer.append(solve(temp));
	}
	for(int i=0;i<n;i++)
	{
		printf("%d\n",answer[i]);
	}
	return 0;
}
void sieve()
{
	for(int i=0;i<N;i++)
		primes[i] = true;
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
int solve(int n)
{
	int sum = 1;
	for(int i=0;n>1 && i < prime.size();i++)
	{
		int b = 0;
		while(n%prime[i] == 0)
		{
			n = n/prime[i];
			b++;
		}
		printf("%d %d\n ",prime[i],b);
		sum *= sigma(prime[i],b);
	
	}
	return sum;
}
int sigma(int p,int a)
{
	int tot = 0;
	tot = (po(p,a+1) - 1);
	tot = tot/(p-1);
	return tot;
}
int po(int x,int n)
{
	int res = 1;
	while(n>0)
	{
		if(n%2 == 1)
		 	res = res * x;
		n = n/2;
		x = x*x;
	}
	return res;
}



