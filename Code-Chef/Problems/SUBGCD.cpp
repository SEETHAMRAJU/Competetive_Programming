#include<bits/stdc++.h>
#define append push_back
using namespace std;
int g(int x,int y);
int main()
{
	int n,temp,t;
	scanf("%d",&t);
	for(int o=0;o<t;o++)
	{
		int gcd;
		scanf("%d",&n);
		scanf("%d",&temp);
		gcd = temp;
		for(int i=1;i<n;i++)
		{
			scanf("%d",&temp);
			gcd = g(gcd,temp);
		}
		if(gcd == 1)
			printf("%d\n",n);
		else
			printf("-1\n");
	}
	return 0;
}
int g(int x,int y)
{
	int a,b;
	a = max(x,y);
	b = min(x,y);
	int temp;
	if(b == 0)
		return a;
	while(b>0)
	{
		temp = a%b;
		a = b;
		b = temp;
	}
	return a;
}




