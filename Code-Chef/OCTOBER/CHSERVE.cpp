#include<bits/stdc++.h>
#define append push_back
#define ll long long int
using namespace std;
int solve(ll k,ll p1,ll p2);
int main()
{
	int t;
	ll k,p1,p2;
	scanf("%d",&t);
	vector<int> answer;
	for(int i=0;i<t;i++)
	{
		scanf("%lld %lld %lld",&p1,&p2,&k);
		answer.append(solve(k,p1,p2));
	}
	for(int i=0;i<t;i++)
	{
		if(answer[i] == 1)
			printf("CHEF\n");
		else	
			printf("COOK\n");
	}
	return 0;
}
int solve(ll k,ll p1,ll p2)
{
	p1 += p2;
	int temp = p1/k;
	if(temp%2 == 0)
		return 1;
	else
		return -1;
}
