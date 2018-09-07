#include<bits/stdc++.h>
#define append push_back
#define N 1000000
using namespace std;
int solve(int n);
int primes[N];
int powe(int x,int n)
{
	int T = n;
	int res = 1;
	while(n>0)
	{
		if(n%2 == 1)
		{
			res = (res*x)%T;
		}
		n = n/2;
		x =(x *x)%T;
	}
	return res%T;
}
void sieve();
int cnt;
int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int n;
	vector <int> q;
	vector <int> answer;
	sieve();
	while(1)
	{
		scanf("%d",&n);
		if(n == 0)
			break;
		q.append(n);
		answer.append(solve(n));
		cnt++;
	}
	for(int i=0;i<cnt;i++)
	{
		if(answer[i] == 1)		
			printf("The number %d is a Carmichael number.\n",q[i]);
		else
			printf("%d is normal.\n",q[i]);	
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
				primes[i*j] = false;
		}	
	}
}
int solve(int n)
{
	if(primes[n])
	{
		return -1;
	}
	else
	{
		int p = 1;
		for(int i=2;i<n;i++)
		{
			if(n%i != 0)
			{
				p = powe(i,n);
				printf("%d\n",p);
				if(p != n)
					return -1;
			}
		}
		return 1;
	}
}
