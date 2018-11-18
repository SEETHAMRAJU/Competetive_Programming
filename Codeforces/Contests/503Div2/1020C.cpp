#include<bits/stdc++.h>
#define pair make_pair
#define append push_back
using namespace std;
int arr[3001];
int main()
{
	int n,m,x,y;
	scanf("%d%d",&n,&m);
	int cost[3001][2];
	int p=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&cost[i][0],&cost[i][1]);
		arr[cost[i][0]]++;
		if(cost[i][0] != 1)
		{
			cost.append(pair(cost[i][1],cost[i][0]));
			p++;
		}
	}
	sort(cost,cost+p);
	int maxsofar = 0;
	for(int i=1;i<3001;i++)
	{  
		if(arr[maxsofar] < arr[i])
		{
			maxsofar = i;
		}
	}
	int total = 0;
	if(maxsofar != 1)
	{
		int i=0;
		while(arr[1] < arr[maxsofar])
		{
			arr[1]++;
			total += cost[i][0];
			arr[cost[i][1]]--;
			i++;
		}
		
	}
	printf("%d\n",total);
	return 0;
}





