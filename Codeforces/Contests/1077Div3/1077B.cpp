#include<bits/stdc++.h>
#define SIZE 1000000
using namespace std;
int arr[SIZE];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int count = 0;
	for(int i=1;i<n-1;i++)
	{
		if(arr[i] == 0)
		{
			if(arr[i-1] == arr[i+1] && arr[i+1]==1)
			{		
				arr[i-1] = 0;
				arr[i+1] =0;
				count++;
			}	
		}
	}
	printf("%d\n",count);
	return 0;
}
