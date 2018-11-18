#include<bits/stdc++.h>
#define 1000000
#define append push_back
using namespace std;
bool primes[N];
vector<int> prime;
map<int,set<int>> arr;
void sieve();
void set(vector<pair<int,int>> q);
int main()
{
	llint n,x,y;
	sieve();
	scanf("%lld",&n);
	vector<pair<llint,llint>> q;
	for(int i=0;i<n;i++)
	{
		scanf("%lld%lld",&x,&y);
		q.append(make_pair(x,y));
	}
	set(q);
	
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
		if(arr[i])
			prime.append(i);
	}
}
void set(vector<pair<llint,llint>> q)
{
	for(llint i=0;i<n;i++)
	{
		set<llint> o = solvefor(q[i].f);
		o.insert(solvefor(q[i].s));
		map[i] = o;
	}
}
set<llint> solvefor(llint m)
{
	set<llint> answer;
	int i=0;
	while(m>0)
	{
		if(m%prime[i] == 0)
		{
			while(m%prime[i] == 0)
			{
				m = m/prime[i];
			}
			answer.insert(prime[i]);
		}
		i++;
	}
	return answer;
}
