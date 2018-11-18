#include<bits/stdc++.h>
#define append push_back
#define llint long long int
using namespace std;
int main()
{
	llint n;
	scanf("%lld",&n);
	if(n>5)
	{
		if(n%3 == 0)
			printf("%lld %lld %lld\n",(llint)1,(llint)4,(llint)n-5);
		else
			printf("%lld %lld %lld\n",(llint)1,(llint)2,(llint)n-3);
	}
	else if(n == 5)
		printf("1 2 2\n");
	else
		printf("%lld %lld %lld\n",(llint)1,(llint)1,(llint)n-2);
	return 0;
}





