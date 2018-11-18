#include<bits/stdc++.h>
using namespace std;
int p(int n);
int main()
{
	int t,n;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d",&n);
		if(n%2 == 0 || n == 1)
			printf("1 %d ",p(n));
		else
			printf("3 %d ",p(n-1));
	}
	return 0;
}
int p(int x)
{
	int ans = 1;
	for(int i=0;i<x;i++)
		ans = ans*2;
	return ans;
}
