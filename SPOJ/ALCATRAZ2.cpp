#include<bits/stdc++.h>
#define append push_back
#define llint long long int
using namespace std;
llint maxi(llint x,llint y);
llint p[10][10];
int main()
{
	llint arr[8];
	for(llint i=0;i<8;i++)
	{
		scanf("%lld",&arr[i]);
	}
	llint a,b,n;
	llint total = 0;
	scanf("%lld",&n);
	for(llint i=0;i<n;i++)
	{
		scanf("%lld%lld",&a,&b);
		p[a-1][b-1] = 1;
		p[b-1][a-1] = 1;
	}
	llint maxsofar= INT_MIN;
	for(llint i=0;i<8;i++)
	{
		llint total = 0;
		for(llint j=0;j<8;j++)
		{
			if(p[i][j] == 0)
			{
				total += arr[j];
				printf("inside -> %lld %lld \n",j+1,arr[j]);
			}
		}
		printf("%lld %lld\n",i+1,total);
		maxsofar = maxi(total,maxsofar);
	}
	printf("%lld\n",maxsofar);
	return 0;
}
llint maxi(llint x,llint y)
{
	if(x>y)
		return x;
	return y;
}





