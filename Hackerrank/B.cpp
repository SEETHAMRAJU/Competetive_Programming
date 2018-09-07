#include<bits/stdc++.h>
#define append push_back
using namespace std;
int arr[1001];
int main()
{
	int n,k,x,y,maxsofar;
	maxsofar = INT_MIN;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j-i -1<=k;j++)
		{
			if(arr[i] + arr[j] > maxsofar)
			{
				x = i;
				y = j;
				maxsofar = arr[i] + arr[j];
			}
		}
	}
	printf("%d %d\n",x,y);
	return 0;
}





