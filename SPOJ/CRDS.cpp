#include<bits/stdc++.h>
#define M 1000007
#define append push_back
#define llint long long int 
using namespace std;
int main()
{
	llint n;
	int t;
	scanf("%d",&t);
	vector <llint> answer;
	while(t>0)
	{
		scanf("%lld",&n);
		llint ans ;
		ans = n*(n+1) + ((n * (n-1))/2);
		answer.append(ans%M);
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		printf("%lld\n",answer[i]);
	}
	return 0;
}





