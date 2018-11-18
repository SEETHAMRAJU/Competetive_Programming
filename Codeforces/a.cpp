#include<bits/stdc++.h>
#define append push_back
using namespace std;
int arr[101];
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int i,j,count;
	i = 0;
	j = n-1;
	count =0;
	while(i<n)
	{
		if(arr[i] <= k)
		{
			count++;
		}
		else
		{
			break;
		}
		i++;
	}
	while(j>i)
	{
		if(arr[j] <= k)
		{
			count++;
		}
		else
		{
			break;
		}
		j--;
	}
	printf("%d\n",count);
	return 0;
}





