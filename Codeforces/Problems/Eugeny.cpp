#include<bits/stdc++.h>
#define append push_back
using namespace std;
int arr[200001];
bool ans[200001];
int main()
{
	int l,r,n,m,pos,neg;
	scanf("%d%d",&n,&m);
	pos = 0;
	neg = 0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i] < 0)
			neg++;
		else
			pos++;
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d%d",&l,&r);
		if((r-l)%2 == 0)
		{
			ans[i] = false;		
		}
		else
		{
			if(pos >= (r-l+1)/2 && neg >= (r-l+1)/2)
			{
				ans[i] = true;
			}
			else
			{
				ans[i] = false;
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		if(ans[i])
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
	}
	return 0;
}





