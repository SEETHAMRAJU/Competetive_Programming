#include<bits/stdc++.h>
#define lint long long int
#define append push_back
using namespace std;
int main()
{
	lint x,n,y,k;
	scanf("%lld%lld%lld",&y,&k,&n);
	x = k-(y%k);
	if(x+y>n)
	{
		printf("-1\n");
		return 0;
	}
	else
	{
		while((x+y)<=n)
		{
			printf("%lld ",x);
			x += k;
		}
		printf("\n");
	}
	return 0;
}





