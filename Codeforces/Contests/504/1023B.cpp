#include<bits/stdc++.h>
#define append push_back
#define llint long long int
using namespace std;
llint maxi(llint x,llint y)
{
	if(y>x)
		return y;
	return x;
}
int main()
{
	llint n,k,total;
	scanf("%lld%lld",&n,&k);
	if(2*n <= k)
		total = 0;
	else if(k-n > 0)
	{
		llint l = k-n;
		llint r = n;
		if((r-l)%2 == 0)
			total = (r-l)/2;
		else
			total = (r-l-1)/2 + 1;
	//	total = maxi(1,total);
	}
	else
	{
		total = (k-1)/2;	
	}
	printf("%lld\n",maxi(total,0));
	return 0;
}

/*100000000000 130000000001*/




