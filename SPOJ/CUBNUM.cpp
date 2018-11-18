#include<bits/stdc++.h>
#define append push_back
#define N 100001
using namespace std;
int arr[N];
int solve(int n);
int main()
{
	memset(arr,-1,sizeof(arr));
	int n;
	int i=1;
	for(int i=0;i*i*i<N;i++)
	{
		arr[i*i*i] = 1;
	}
	while(scanf("%d",&n)!=EOF)
	{
		printf("Case #%d: %d\n",i,solve(n));
		i++;
	}

	return 0;
}
int solve(int n)
{
	if(arr[n] != -1)
		return arr[n];
	else
	{
		int ans = INT_MAX;
		for(int i=1;i*i*i<=n;i++)
		{
			ans = min(ans,1+solve(n-i*i*i));
		}
		arr[n] = ans;	
	}
	return arr[n];
}




