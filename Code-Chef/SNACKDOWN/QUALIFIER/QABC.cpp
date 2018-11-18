#include<bits/stdc++.h>
#define append push_back
#define llint long long int
using namespace std;
bool solve(vector<llint> q,vector<llint> g);
int main()
{
	llint t;
	scanf("%lld",&t);
	vector<bool> answer;
	for(llint i=0;i<t;i++)
	{
		llint n,temp;
		scanf("%lld",&n);
		llint total  =0;
		llint total2= 0;
		vector<llint> g,q;
		for(llint j=0;j<n;j++)
		{
			scanf("%lld",&temp);
			q.append(temp);	
			total += temp;
		}		
		for(llint j=0;j<n;j++)
		{
			scanf("%lld",&temp);
			total2 += temp;	
			g.append(temp);
		}
		if((total2-total)%6 == 0)
			answer.append(solve(q,g));
		else
			answer.append(false);
	}
	for(llint i=0;i<t;i++)
	{
		if(answer[i])
			printf("TAK\n");
		else
			printf("NIE\n");
	}
	return 0;
}
bool solve(vector<llint> q,vector<llint> g)
{
	llint i=0,cur=1;
	while(q[i]==g[i] && i<q.size())
		i++;
	if(i<q.size())
	{
		for(i;i<q.size()-2;i++)
		{
			if(q[i]!=g[i])
			{		
				cur = g[i] - q[i];
				g[i] -= cur;
				g[i+1] -= 2*cur;
				g[i+2] -= 3*cur;
			}
		}
		for(i=0;i<q.size();i++)
		{
			if(q[i] != g[i])
				return false;
		}
	}
	return true;
}
