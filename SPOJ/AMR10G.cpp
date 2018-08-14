#include<bits/stdc++.h>
#define append push_back
#define llint long long int
using namespace std;
llint maxi(llint x,llint y)
{
	if(x>y)
		return x;
	return y;
}
llint mini(llint x,llint y)
{
	if(x<y)
		return x;
	return y;

}
int main()
{
	int t;
	scanf("%d",&t);
	vector <llint> answer;
	for(int j=0;j<t;j++)
	{
		llint temp,n,k;
		scanf("%lld%lld",&n,&k);
		vector <llint> q;
		for(llint i=0;i<n;i++)
		{
			scanf("%lld",&temp);
			q.append(temp);
		}	
		sort(q.begin(),q.end());
		llint minsofar = INT_MAX;
		if(k == 1)
			minsofar = 0;
		else
		{
			for(llint i=0;i+k<=n;i++)
			{
				minsofar = mini(minsofar,q[i+k-1] - q[i]);
			}
		}
		answer.append(minsofar);
	}
	for(llint i=0;i<t;i++)
	{
		printf("%lld\n",answer[i]);
	}
	return 0;
}
