#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	llint t,n;
	vector <llint> answer;
	scanf("%lld",&t);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&n);		
		answer.append(solve(n));	
	}
	for(int i=0;i<t;i++)
	{
		pritnf("%lld",answer[i]);
	}
	return 0;
}
llint solve(llint n)
{
	llint near = (int) floor(log2((double)n));
	llint p = n - po(2,near) ;
	
}




