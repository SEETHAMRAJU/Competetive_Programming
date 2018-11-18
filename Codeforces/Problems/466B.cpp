#include<bits/stdc++.h>
#define llint long long int
#define append push_back
using namespace std;
llint answer;
llint cnt[500001];
llint arr[500001];
llint prefix[500001];
int main()
{
	llint n,s;
	s =0;
	scanf("%lld",&n);
	scanf("%lld",&arr[0]);
	s += arr[0];
	prefix[0] = arr[0];
	for(llint i=1;i<n;i++)
	{
		scanf("%lld",&arr[i]);
		prefix[i] = arr[i] + prefix[i-1];
		s += arr[i];
	}
	if(s%3 != 0)
	{
		printf("0\n");
		return 0;
	}
	llint tot = 0;
	for(llint i=n-1;i>=0;i--)
	{
		tot = tot + arr[i];
		if(tot == s/3)
		{
			cnt[i] = 1;
		}
		cnt[i] = cnt[i] + cnt[i+1];
	}
	for(llint i=0;i<n-2;i++)
	{
		if(prefix[i] == s/3)
		{
			answer += cnt[i+2];
		}
	}
	printf("%lld\n",answer);
	return 0;
}





