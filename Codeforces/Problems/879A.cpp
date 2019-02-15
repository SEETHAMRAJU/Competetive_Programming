#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp,l,a,b;
	scanf("%d",&n);
	int cur = 0;
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&b,&a);
		temp = b;
		while(b<=cur)
			b += a;
		cur = b;
	}
	printf("%d\n",cur);
	return 0;	
}
