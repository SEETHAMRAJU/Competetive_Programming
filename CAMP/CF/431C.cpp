#include<bits/stdc++.h>
#define append push_back
#define llint long long int
#define SIZE 1000000
#define M 1000000007
using namespace std;
llint arr[150][2];
int d,k;
llint solve(int n,int flag);
int main()
{
	int n;
	for(int i=0;i<150;i++)
	{
		arr[i][0] = -1;
		arr[i][1] = -1; 		
	}
	arr[0][0] = 1;
	arr[0][1] = 0;
	scanf("%d%d%d",&n,&k,&d);
	arr[d][1] = 1;
	for(int i=1;i<d;i++)
		arr[i][1] = 0;
	printf("%lld\n",solve(n,1));
	return 0;
}
llint solve(int n,int flag)
{
	if(arr[n][flag] != -1)
		return arr[n][flag];
	else
	{
		llint sum = 0;
		if(flag == 0)
		{
			for(int i=1;i<min(1+n,d);i++)
				sum = (sum%M + (solve(n-i,flag))%M)%M;
		}
		else
		{
			for(int i=1;i<d;i++)
				sum = (sum%M + (solve(n-i,flag))%M)%M;
			for(int i=d;i<=min(k,n);i++)
				sum = (sum%M + (solve(n-i,flag) + solve(n-i,1-flag))%M)%M;
			
		}
		arr[n][flag] = sum%M;
		return sum%M;
	}
}
