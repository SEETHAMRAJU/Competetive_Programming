#include<bits/stdc++.h>
#define append push_back
#define SIZE 1000000
using namespace std;
int arr[SIZE];
int q[SIZE];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	if(n == 1)
	{printf("0\n");return 0;}
	if(arr[1] - arr[0] == 1 )
		q[0] =1;
	for(int i=1;i<n;i++)
	{
		if(i>0 && i<n-1)
		{
			if(arr[i]-arr[i-1] == 1 && arr[i+1]-arr[i] == 1)
				q[i] = 1;
		}
		
	}
	int count = 0;
	int ans = INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(q[i] == 0&&count>0)
		{
			ans = max(count,ans);
			count = 0;
		}
		else if(q[i] == 1)
			count++;
	}
	printf("%d\n",ans);
	return 0;
}





