#include<bits/stdc++.h>
#define append push_back
#define N 1000000
using namespace std;
bool check(int n);
int primes[N];
vector <int>prime;
void sieve();
vector <int> solve(int l,int u);
int main()
{
	int n,l,u;
	vector <vector<int>> ans; 
	scanf("%d",&n);
	sieve();
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&l,&u);
		vector <int> p= solve(l,u);
		ans.append(p);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<ans[i].size();i++)
		{
			printf("%d\n",ans[i][j]);
		}
		printf("\n");
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
vector <int> solve(int l,int u)
{
	vector <int> ans;
	if(u<N)
	{
		int j=0;
		for(;j<prime.size() && prime[j] < l;j++)
		{
		}
		printf("HOla\n");
		for(;prime[j]<=u && j<prime.size();j++)
		{
			ans.append(prime[j]);
			printf("%d\n",prime[j]);
		}
		printf("Hola");	
		return ans;
	}
	else if(l<N && u>N)
	{
		int j=0;
		for(;prime[j]<l;j++)
		{
		}
		for(;j<prime.size();j++)
		{
			ans.append(prime[j]);
		}
		j = ans[j-1];
		for(;j<=u;j++)
		{
			if(check(j))
				ans.append(j);
		}
	}
	else
	{
		for(;l<=u;l++)
		{
			if(check(l))
				ans.append(l);
		}
	}
	printf("Hola\n");
	return ans;
}
bool check(int n)
{
	for(int i=0;prime[i]*prime[i] <= n;i++)
	{
		if(n%prime[i] == 0)
			return true;
	}
	return false;
}



