#include<bits/stdc++.h>
#define append push_back
#define llint long long int
#define N 9000000
using namespace std;
llint maxa(llint x,llint y);
llint maxi(llint a,llint b,llint c,llint d);
llint f(llint p,llint q);
llint dp[N];
llint solve(llint n);
int main()
{
	llint n;
	vector<llint>answer;
	memset(dp,-1,sizeof(dp));
	while(cin>>n)
	{
		answer.append(solve(n));
	}
	for(int i=0;i<answer.size();i++)
		printf("%lld\n",answer[i]);
	return 0;
}
llint maxa(llint x,llint y)
{
	if(y>x)
		return y;
	return x;
}
llint maxi(llint a,llint b,llint c,llint d)
{
	return maxa(a,maxa(b,maxa(c,d)));
}
llint f(llint p,llint q)
{
	llint temp = floor((double)p/q);
}
llint solve(llint n)
{
	if(n<=0)
		return 0;
	if(n<N && dp[n] > -1)
		return dp[n];
	else
	{
		llint a,b,c;
		a = f(n,2);
		b = f(n,3);
		c = f(n,4);
		llint ans;
		ans = maxa(n,solve(n/2)+solve(n/3)+solve(n/4));
		if(n<N)
			dp[n] = ans;
		return ans;
	}
}




