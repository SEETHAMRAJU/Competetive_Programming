#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long int a,b,k;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%lld%lld%lld",&a,&b,&k);
		if(k%2 == 0)
			printf("%lld\n",(k/2)*a - (k/2)*b);
		else
			printf("%lld\n",((k/2)+1)*a - (k/2)*b);
	}
	return 0;
}
