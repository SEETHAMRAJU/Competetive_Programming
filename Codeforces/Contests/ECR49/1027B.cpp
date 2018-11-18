#include<bits/stdc++.h>
#define append push_back
#define llint long long int
using namespace std;
llint solve(llint x,llint y);
llint n,q;
int main()
{
	llint x,y;
	scanf("%lld%lld",&n,&q);
	vector <llint> answer;
	for(int i=0;i<q;i++)
	{
		scanf("%lld%lld",&x,&y);
		answer.append(solve(x,y));
	}
	for(int i=0;i<q;i++)
		printf("%lld\n",answer[i]);
	return 0;
}
llint solve(llint x,llint y)
{
	if((x+y)%2 == 0)
	{
		return (x-1) + (x+y)/2;
	}
	else
	{
		llint flag = (llint) ceil((double)((n*n)/2));
		return flag + (x+y)/2;	
	}
}
