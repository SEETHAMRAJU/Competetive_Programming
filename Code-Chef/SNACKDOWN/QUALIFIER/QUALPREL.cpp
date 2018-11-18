#include<bits/stdc++.h>
#define ll long long int
#define append push_back
using namespace std;
int main()
{
	ll n,k,t,temp;
	vector<ll>answer;
	scanf("%lld",&t);
	for(ll i=0;i<t;i++)
	{	
		vector<ll>q;
		scanf("%lld %lld",&n,&k);
		for(ll i=0;i<n;i++)
		{
			scanf("%lld",&temp);
			q.append(temp);
		}
		sort(q.begin(),q.end());
		ll total = 0;	
		for(ll i=n-1;q[i]>=q[n-k];i--)
		{
		 	//printf("%lld %lld\n",q[i],q[k]);
		 	total++;
		}
		answer.append(total);
	}
	for(ll i=0;i<t;i++)
	{
		printf("%lld\n",answer[i]);
	}
	return 0;
}
