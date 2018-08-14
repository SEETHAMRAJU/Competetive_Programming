#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	long long unsigned int p;
	long long unsigned int tot = 0;
	int n;
	scanf("%d",&n);
	while(n>0)
	{
		scanf("%llu",&p);
		tot = tot ^ p;
		n--;
	}
	printf("%llu\n",tot);
	return 0;
}





