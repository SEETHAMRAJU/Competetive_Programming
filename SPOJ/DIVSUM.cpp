#include<bits/stdc++.h>
#define append push_back
#define llint long long int 
using namespace std;
llint solve(llint n);
int main()
{
	llint t;
	vector <llint> ans;
	scanf("%lld",&t);
	for(llint i=0;i<t;i++)
	{
		llint n;
		scanf("%lld",&n);
		ans.append(solve(n));				
	}
	for(llint i=0;i<t;i++)
	{
		printf("%lld\n",ans[i]);
	}
	return 0;
}
llint solve(llint n)
{
	llint sum =1;
	if(n == 1)
		return 0;
	for(llint i=2;i*i<n;i++)
	{
		if(n%i == 0)
		{
			sum += i + n/i;	
		}
	}
	return sum;
}
