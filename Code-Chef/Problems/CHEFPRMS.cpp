#include<bits/stdc++.h>
#define N 210
#define append push_back
using namespace std;
void sieve();
vector<int> prime,arr;
bool primes[N];
int solve(int n);
int main()
{
	int n,t;
	sieve();
	scanf("%d",&t);
	for(int o=0;o<t;o++)
	{
		scanf("%d",&n);
		int ans = solve(n);
		if(ans == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}
int solve(int n)
{
	int l=0;
	int r = arr.size()-1;
	while(arr[l] + arr[r] != n && l<=r)
	{
		if(arr[l]+arr[r] > n)
			r--;
		else if(arr[l] + arr[r] < n)
			l++;
	}
	if(l>r)
		return -1;
	return 1;
}
void sieve()
{
	memset(primes,true,sizeof(primes));
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
	for(int i=0;i<prime.size();i++)
	{
		for(int j=i+1;j<prime.size();j++)
		{
			arr.append(prime[i]*prime[j]);
		}
	}
	sort(arr.begin(),arr.end());	
}




