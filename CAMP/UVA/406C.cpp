#include<bits/stdc++.h>
#define append push_back
#define N 1002
using namespace std;
void sieve();
vector <int> solve(int l,int u);
int primes[N];
vector <int> prime;
int main()
{
	int l,u;
	vector <pair<int,int>> q;
	vector <vector<int>> ans; 
	int n = 0;
	while(scanf("%d %d",&l,&u) != EOF)
	{
		n++;
		q.append(make_pair(l,u));
		ans.append(solve(l,u));
	
	}
	for(int i=0;i<n;i++)
	{
		printf("%d %d: ",q[i].first,q[i].second);
		for(int j=0;j<ans[i].size();j++)
		{
			
			printf("%d ",ans[i][j]);
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
vector <int> solve(int l,int c)
{
	vector <int> o;
	int count = 0;
	for(;count<prime.size() && prime[count] <= l;count++)
	{
	}
	if(count%2 == 0)
	{
		if(2*c > count)
		{
			for(int i=0;i<count;i++)
			{
				o.append(prime[i]);
			}
		}
		for(int i=count/2;i<2*c;i++)
		{
			o.append(prime[i]);
		}
	}
	else
	{
		if(2*c - 1  >count)
		{
			for(int i=0;i<count;i++)
			{
				o.append(prime[i]);
			}
		}
		for(int i=count/2;i<2*c-1;i++)
		{
			o.append(prime[i]);
		}
	}
	/*for(int i=0;i<o.size();i++)
	{
		printf("%d ",o[i]);
	}*/
	return o;
}




