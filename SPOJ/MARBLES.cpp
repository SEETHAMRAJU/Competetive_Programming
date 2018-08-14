#include<bits/stdc++.h>
#define llint long long int
#define append push_back
#define M 1000000007
using namespace std;
llint C(llint x,llint y);
llint mini(llint a,llint b);
int main()
{
	int t;
	scanf("%d",&t);
	vector <llint> answer;
	for(int i=0;i<t;i++)
	{
		llint n,k;
		scanf("%lld %lld",&n,&k);
		llint ans = C(n-1,mini(k-1,n-k));
		answer.append(ans);
	}
	for(int i=0;i<t;i++)
	{
		printf("%lld\n",answer[i]);
	}
	return 0;
}
llint mini(llint a,llint b)
{
	if(b<a)
		return b;
	return a;
}
llint C(llint n,llint k)
{
	llint ans = 1;
	llint i=0;
	
	while(i<k)
	{
		ans = (ans * (n-i))/(i+1);
		i++;
	}
	return ans%M;
}
