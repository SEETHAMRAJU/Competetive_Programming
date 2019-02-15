#include<bits/stdc++.h>
#define append push_back
#define ll long long int
using namespace std;
int ans[1000];
void solve(vector<int> q,int n);
int main()
{
	int n,temp;
	ll k;
	int maxt = INT_MIN;
	int maxi;
	vector<int> q;
	scanf("%d%lld",&n,&k);	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		q.append(temp);
		maxt = max(temp,maxt);	
		if(maxt == temp)
			maxi = i;	
	}
	solve(q,n);
	int i=0;
	if(maxi < k)
	{
		printf("%d\n",q[maxi]);
		return 0;
	}		
	else
	{
		int count = 0;
		int cur = q[0];
		for(int i=1;i<n;i++)
		{
			if(q[i] < cur)
				count++;
			else
			{
				cur = q[i];
				count = 1;
			}
			if(count >= k)
			{
				printf("%d\n",cur);
				return 0;
			}
		}
	}
	printf("%d\n",q[maxi]);
/*
	for(int i=0;i<n;i++)
	{
		if(ans[i] == -1 || ans[i]-i-1>=k)
		{
			printf("%d\n",q[i]);
			return 0;
		}

	}
//	while(ans[i]!=-1 && ans[i] - i - 1 < k && i<n)
//		i++;
//	printf("%d\n",q[i]);*/
	return 0;
}
void solve(vector<int> q,int n)
{
	deque<int> s;
	s.append(0);
	int i=1;
	while(i<n)
	{
		if(q[s.back()] > q[i])
			s.append(i);
		else
		{
			
			while(!s.empty() && q[s.back()] < q[i] )
			{
				ans[s.back()] = i;
				s.pop_back();	
			}		
			s.append(i);
			
		}
		i++;	
	}
	while(!s.empty())
	{
		ans[s.back()] = -1;
		s.pop_back();
	}	
	
}
