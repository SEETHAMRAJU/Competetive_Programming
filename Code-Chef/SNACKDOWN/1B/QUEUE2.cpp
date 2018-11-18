#include<bits/stdc++.h>
#define append push_back
#define ll long long int
using namespace std;
ll n,m,k,l;
ll solve(vector<ll> q);
ll nearest(ll o);
int main()
{
	ll t,temp;
	vector<ll>answer;
	scanf("%lld",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%lld%lld%lld%lld",&n,&m,&k,&l);
		vector<ll>q;
		for(int j=0;j<n;j++)
		{
			scanf("%lld",&temp);
			q.append(temp);
		}
		answer.append(solve(q));
	} 
	for(int i=0;i<t;i++)
	{
		printf("%lld\n",answer[i]);
	}
	return 0;
	
}
ll solve(vector<ll> q)
{
	sort(q.begin(),q.end());
	ll time = 0;
	ll count = m;
	if(q[0]>l)
		count = count - (q[0]/l);
	time = nearest(q[0]) + count*l - q[0];
	ll answer = time;
	//time = nearest(q[0]) + count*l - k;
	//if(time>0 && answer>time)
	//	answer = time;
	for(int i=1;i<n;i++)
	{
		count++;
		if(q[i]-q[i-1]>=l)
		{
			count = count - ((q[i]-q[i-1])/l);	
			if(q[i-1]%l == 0 || q[i]%l == 0)
				count--;
		}
		else
		{
			for(int j=q[i-1]+1;j<=q[i];j++)
			{
				if(j%l == 0)
					count--;
			}
		}
		time = nearest(q[i]) + count*l - q[i];
		answer = min(time,answer);
	}
	answer = min(answer,nearest(q[n-1])+count*l - k);
	return answer;
}
ll nearest(ll o)
{
	return ((int)o/l)*l + l;
}

