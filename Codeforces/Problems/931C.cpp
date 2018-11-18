#include<bits/stdc++.h>
#define append push_back
#define N 100000
#define llint long long int
using namespace std;
int mini(int x,int y,int z);
int arr[N];
int main()
{
	int n,maxt,mint;
	mint = INT_MAX;
	maxt = INT_MIN;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		maxt = max(maxt,arr[i]);
		mint = min(mint,arr[i]);
	}
	if(maxt-mint > 1)
	{
		map<int,int> p;
		p[maxt] = 0;
		p[mint] = 0;
		int mid;
		for(int i=0;i<n;i++)
		{
			if(arr[i] != maxt && arr[i] != mint)
			{
				p[arr[i]] = 0;
				mid = arr[i];
				break;
			}
		}
		int pre[3] = {0,0,0};
		for(int i=0;i<n;i++)
			p[arr[i]]++;
		pre[0] = p[mint];
		pre[1] = p[mid];
		pre[2] = p[maxt];
		if(p[mint] == mini(p[mint],p[mid],p[maxt]))
		{
			while(p[mint]>0 )
			{
				p[maxt]--;
				p[mint]--;
				p[mid]+=2;
			}
		}
		else if(p[mid] == mini(p[mint],p[mid],p[maxt]))
		{
			while(p[mint] > 0 || p[maxt]>0)
			{
				p[maxt]--;
				p[mint]--;
				p[mid]+=2;
			}
		}
		else if(p[maxt] == mini(p[mint],p[mid],p[maxt]))
		{
			while(p[maxt]>0)
			{
				p[maxt]--;
				p[mint]--;
				p[mid]+=2;
			}
		}
		printf("%d\n",min(pre[0],p[mint]) + min(pre[1],p[mid]) + min(pre[2],p[maxt]));
		while(p[mint]>0)
		{
			printf("%d ",mint);
			p[mint]--;
		}
		while(p[maxt]>0)
		{
			printf("%d ",maxt);
			p[maxt]--;
		}
		while(p[mid]>0)
		{
			printf("%d ",mid);
			p[mid]--;
		}
		printf("\n");
		return 0;
	}
	printf("%d\n",n);
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
int mini(int x,int y,int z)
{
	if(x<=y && x<=z)
		return x;
	else if(y<=x && y<=z)
		return y;
	else
		return z;
}




