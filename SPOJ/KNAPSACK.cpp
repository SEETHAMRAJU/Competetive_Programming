#include<bits/stdc++.h>
#define append push_back
#define llint long long int
using namespace std;
llint maxa(llint x,llint y);
llint KNAPSACK(llint W,vector <llint> wt,vector <llint> val,llint n);
int main()
{
	llint W,n,temp1,temp2;
	scanf("%lld%lld",&W,&n);
	vector <llint> wt,val;
	for(llint i=0;i<n;i++)
	{
		scanf("%lld%lld",&temp1,&temp2);
		wt.append(temp1);
		val.append(temp2);
	}
	llint ans = KNAPSACK(W,wt,val,n);
	printf("%lld",ans);
	return 0;
}
llint KNAPSACK(llint W,vector <llint> wt,vector <llint> val,llint n)
{
	llint i,w;
	vector <vector <llint>> K;
	for(i=0;i<n+1;i++)
	{
		vector <llint> temp;
		for(llint j=0;j<W+1;j++)
		{
			temp.append(0);
		}
		K.append(temp);
	}
	for(i=0;i<=n;i++)
	{
		for(w=0;w<=W;w++)
		{
			if(i == 0 || w == 0 )
			{
				K[i][w] = 0;
			}
			else if(wt[i-1] <= W)
				K[i][w] = maxa(val[i-1] + K[i-1][w-wt[i-1]] , K[i-1][w]);
			else
				K[i][w] = K[i-1][w];
		}
	}
	for(llint i=0;i<=n;i++)
	{
		for(llint j=0;j<=w;j++)
		{
			printf("%lld ",K[i][j]);
		}
		printf("\n");
	}
	return K[n][w];
}
llint maxa(llint x,llint y)
{
	if(y>x)
		return y;
	return x;
}




