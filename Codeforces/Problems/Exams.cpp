#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int req = 2*n;
	if(req == k)
	{
		printf("%d\n",n);
		return 0;
	}
	else if(k >= 3*n)
	{
		printf("0\n");
		return 0;
	}
	else
	{
		while(req !=k)
		{
			req++;
			n--;
		}
		printf("%d\n",n);
		return 0;
	}
	return 0;
}





