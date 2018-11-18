#include<bits/stdc++.h>
#define append push_back
#define llint long long int
using namespace std;
llint solve(vector<llint> q,llint n);
int main()
{
	llint t;
	scanf("%lld",&t);
	vector<llint> answer;
	for(llint i=0;i<t;i++)
	{
		llint n,temp;	
		vector<llint> q;
		scanf("%lld",&n);
		for(llint j=0;j<n;j++)
		{
			scanf("%lld",&temp);
			q.append(temp);
		}
		answer.append(solve(q,n));
	}
	for(llint i=0;i<t;i++)
	{
		printf("%lld\n",answer[i]);
	}
	return 0;
}
llint solve(vector<llint> q,llint n)
{
	llint days=0;	
	llint present = q[0];
	llint i=1;
	llint cur=0;
	while(i<n)
	{
		cur = present;
		if(present>=n-i)
			return days+1;
		while(cur>0 && i<n)
		{
			cur--;
			present+=q[i];
			i++;
		}
		days++;
	}
	return 0;
}
