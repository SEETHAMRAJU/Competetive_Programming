#include<bits/stdc++.h>
#define append push_back
using namespace std;
int KNAPSACK(int W,vector <int> w,vector <int> val,int n);
int main()
{
	int W,n,temp1,temp2;
	scanf("%d%d",&W,&n);
	vector <int> wt,val;
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&temp1,&temp2);
		wt.append(temp1);
		val.append(temp2);
	}
	int ans = KNAPSACK(W,wt,val,n);
	printf("%d\n",ans);
	return 0;
}
int KNAPSACK(int W,vector <int> wt,vector <int> val,int n)
{
	int i,w;
	vector <vector <int>> K;
	for(int i=0;i<n+1;i++)
	{
		vector <int> temp;
		for(int j=0;j<W+1;j++)
		{
			temp.append(0);
		}
		K.append(temp);
	}
	for(i=0;i<=n;i++)
	{
		for(w=0;w<=W;w++)
		{
			if(i == 0 || w==0)
				K[i][w] = 0;
			else if(wt[i-1] <= W)
				K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]] , K[i-1][w]);
			else
				K[i][w] = K[i-1][w];
		}
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=w;j++)
		{
			printf("%d ",K[i][j]);
		}
		printf("\n");
	}
	return K[n-1][w-1];
}
