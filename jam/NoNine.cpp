#include<bits/stdc++.h>
#define llint long long int
#define append push_back
using namespace std;
llint solve(llint x,llint y);
bool isnine(llint x);
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	llint t,x,y;
	scanf("%lld",&t);
	vector <llint> answer;
	for(llint i=0;i<t;i++)
	{
		scanf("%lld%lld",&x,&y);	
		answer.append(solve(x,y));
	}
	
	for(llint i=0;i<t;i++)
	{
		printf("Case #%lld: %lld\n",i+1,answer[i]);
	}

	return 0;
}
llint solve(llint x,llint y)
{
	llint count = 0;
	for(llint i=x;i<=y;i++)
	{
		if(isnine(i))
			count++;
	}
	return count;
}
bool isnine(llint x)
{
	if(x%9 == 0)
	{
		return false;
	}
	while(x>0)
	{
		if((x%10) == 9)
		{
			return false;
		}
		x = x/10;
	}
	return true;
}



