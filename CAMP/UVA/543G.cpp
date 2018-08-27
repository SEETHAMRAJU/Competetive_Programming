#include<bits/stdc++.h>
#define append push_back
#define N 1000000
using namespace std;
void sieve();
pair <int,int>solve(int n);
int primes[1000001];
vector <int> prime;
int main()
{
	sieve();
	int count = 0;
	int n;
	vector <int> q;
	vector <pair<int,int>> ans;
	while(1)
	{
		scanf("%d",&n);
		if(n == 0)
			break;
		q.append(n);
		ans.append(solve(n));
		count++;
	}
	int i=0;
	while(count--)
	{
		if(ans[i].first == -1)
		{
			printf("Goldbach's conjecture is wrong\n");
		}
		else
		{
			printf("%d = %d + %d\n",q[i],ans[i].first,ans[i].second);
		}
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
	//for(int i=0;i<50;i++)
	//{
//		printf("%d ",prime[i]);
//	}
}
pair <int,int> solve(int n)
{
	int i = 0;
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
			break;
		//printf("%d %d %d\t",prime[l] + prime[r],prime[l],prime[r]);
	}
	if(l>r)
		return make_pair(-1,-1);
	return make_pair(prime[l],prime[r]);
}



