#include<bits/stdc++.h>
#define append push_back
#define N 9000000
#define llint long long int 
using namespace std;
llint check(llint n);
pair<llint,llint> solve(llint l,llint u);
void pri();
int primes[N];
llint l,u;
vector <int> prime;
int main()
{
	int t;
	scanf("%d",&t);
	vector <pair<llint,llint>> ans;
	pri();
	vector <pair<llint,llint>> q;
	for(int i=0;i<t;i++)
	{
		scanf("%lld", &l);
		scanf("%lld",&u);
		q.append(make_pair(l,u));
		ans.append(solve(l,u));
	}
	for(int i=0;i<t;i++)
	{
		printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",q[i].first,q[i].second,ans[i].first,ans[i].second);
	}
	return 0;

}
void pri()
{
	primes[0] = false;
	primes[1] = false;
	for(int i=2;i<N;i++)
	{
		primes[i] = true;
	}
	for(int i=2;i<N;i++)
	{

		if(primes[i])
		{
			for(int j = 2;i*j<N;j++)
			{
				primes[i*j] = false;
			}
		}
	}
	for(int i=2;i<N;i++)
	{
		if(primes[i])
		{
			prime.append(i);
		}
	}
}
pair<llint,llint> solve(llint l,llint u)
{
	llint maxsofar,maxquan;
	maxsofar = INT_MIN;
	maxquan = INT_MIN;
	for(llint i=l;i<=u;i++)
	{
		llint o = check(i);
		if(o>maxquan)
		{
			maxquan = o;
			maxsofar = i;
		}
	}
	return make_pair(maxsofar,maxquan);
}
llint check(llint n)
{
	llint count = 1;
	int i=0;
	while(n>1 && i<prime.size())
	{
		int a1 = 0;
		while(n%prime[i] == 0)
		{
			n = n/prime[i];
			a1++;
		}
		count *= (a1+1);
		i++;
	}
	return count;
}



