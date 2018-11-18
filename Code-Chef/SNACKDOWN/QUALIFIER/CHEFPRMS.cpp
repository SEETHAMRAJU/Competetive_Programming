#include<bits/stdc++.h>
#define append push_back
#define N 201
using namespace std;
int arr[N];
vector<int> prime,q;
int primes[N];
bool solve(int temp);
void sieve();
int main()
{
	int n,temp;
	sieve();
	vector<bool> answer;
	scanf("%d",&n);
	sort(q.begin(),q.end());	
	for(int i=0;i<n;i++)
	{	
		scanf("%d",&temp);
		answer.append(solve(temp));
	}
	for(int i=0;i<n;i++)
	{
		if(answer[i])
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
bool solve(int temp)
{
	int l=0,r=q.size()-1;
	while(l<=r)
	{
		if(q[l] + q[r] > temp)
		{
			r--;
		}
		else if(q[l] + q[r] < temp)
		{
			l++;
		}
		else
		{
			return true;
		}
	}
	return false;
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
	for(int i=0;i<prime.size()-1;i++)
	{
		for(int j=i+1;j<prime.size();j++)
		{
				q.append(prime[i]*prime[j]);
		}
	}
}


