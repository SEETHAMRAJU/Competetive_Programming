#include<bits/stdc++.h>
#define append push_back
#define N 9000000
#define llint long long int 
using namespace std;
llint check(llint n);
pair<llint,llint> solve(llint l,llint u);
void pri();
int primes[N];
vector <int> prime;
int main()
{
	int t;
	scanf("%d",&t);
	vector <pair<llint,llint>> ans;
	pri();
/*	for(int i=0;i<t;i++)
	{
		long long int l;
		long long int u;
		scanf("%lld", &l);
		scanf("%lld",&u);
		ans.append(solve(l,u));
	}*/
	llint temp;
	scanf("%lld",&temp);
	printf("%lld\n",check(temp));
	/*for(int i=0;i<t;i++)
	{
		printf("%lld\t%lld\n",ans[i].first,ans[i].second);
	}*/
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
		//printf("%lld %lld\n",i,o);
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
	for(int i=0;prime[i]*prime[i]<n && n>1;i++)
	{
		printf("prime-> %d\n",prime[i]);
		int a1 = 0;
		while(n%prime[i] == 0)
		{
			printf("%d\n",prime[i]);
			a1++;
			n = n/prime[i];
		}
		count *= (a1+1);
		
	}
	return count;
}



