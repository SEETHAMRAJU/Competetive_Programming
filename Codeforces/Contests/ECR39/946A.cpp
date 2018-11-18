#include<bits/stdc++.h>
#define N 101
using namespace std;
int sum;
int arr[N];
int main()
{
	int n;
	bool flag = false;	
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]<0)
			flag = true;
		sum += arr[i];	
	}
	if(flag)
	{
		sum = 0;
		sort(arr,arr+n);
		for(int i=0;i<n;i++)
		{
			sum += max(arr[i],-1*arr[i]); 	
		}		
	}
	printf("%d\n",sum);
	return 0;
}
