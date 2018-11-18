#include<bits/stdc++.h>
#define append push_back
using namespace std;
int check(long long int n);
int solve(long long int n);
long long int maxi(long long int x,long long int y);
int main()
{
	long long int n;
	scanf("%lld",&n);
	int ans = solve(n);
	printf("%d\n",max(ans,1));
	return 0;
}
int solve(long long int n)
{
	int count = 0;
	while(check(n) != 1)
	{
		n++;
		count++;
	}
	if(count == 0)
	{
		n++;
		count++;
		while(check(n) != 1)
		{
			n++;
			count++;
		}
	}
	return count;
}
int check(long long int n)
{
	long long int N = n;
	while(N!=0)
	{
		if((maxi(N,(-1)*N))%10 == 8)
		{
			return 1;
		}
		N = N/10;
	}
	return 0;
}
long long int maxi(long long int x,long long int y)
{
	if(x>y)
		return x;
	return y;
}




