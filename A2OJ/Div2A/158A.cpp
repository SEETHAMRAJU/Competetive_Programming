#include<bits/stdc++.h>
using namespace std;
int arr[60];
int main()
{
	int n,k,req;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(i == k-1)
			req = arr[i];
	}
	int count = 0;	
	for(int i=0;i<n;i++)
	{
		if(arr[i] >= req && arr[i] >0)
			count++;
	}	
	printf("%d\n",count);
	return 0;
}
