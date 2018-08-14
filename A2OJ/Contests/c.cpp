#include<bits/stdc++.h>
#define append push_back
using namespace std;
int forw[1000000];
int backw[1000000];
int arr[1000000];
int main()
{
	int n;
	scanf("%d",&n);
	scanf("%d",&arr[0]);
	forw[0] = arr[0];
	for(int i=1;i<n;i++)
	{
		scanf("%d",&arr[i]);
		forw[i] = arr[i] + forw[i-1];
	}
	for(int i=n-1;i>=0;i--)
	{
		backw[i] = backw[i+1] + arr[i];
	}
	int maxsofar = INT_MIN;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>=i;j--)
		{
			if(forw[i] == backw[j])
			{
				maxsofar = max(forw[i],maxsofar);
			}
		}
	}
	printf("%d\n",max(maxsofar,0));
	return 0;
}





