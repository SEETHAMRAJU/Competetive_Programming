#include<bits/stdc++.h>
#define llint long long int
#define append push_back
using namespace std;
llint solve(llint L,llint v,llint l,llint r);
int main()
{
	int t;
	llint L,v,l,r;
	scanf("%d",&t);
	vector<llint> answer;
	for(int i=0;i<t;i++)
	{
		scanf("%lld%lld%lld%lld",&L,&v,&l,&r);
		answer.append(solve(L,v,l,r));
	}
	for(int i=0;i<t;i++)
		printf("%lld\n",answer[i]);

	return 0;
}
llint solve(llint L,llint v,llint l,llint r)
{
	llint answer = 0;
	if(l%v == 0 || r%v == 0)
		r++;
	answer = L/v - (r-l)/v;
	return answer;
}




