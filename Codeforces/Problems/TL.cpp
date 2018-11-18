#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int temp,n,m;
	scanf("%d%d",&n,&m);
	vector <int> cor,wro;
	int maxsofar,minsofar,mini;
	maxsofar = -1000;
	mini = 1000;
	minsofar = 1000;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		maxsofar = max(maxsofar,temp);
		mini = min(mini,temp);
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d",&temp);
		minsofar = min(minsofar,temp);
	}
	int v = mini;
	int pi = maxsofar;
	int req = minsofar;
	if(max(pi,2*v) < req)
	{
		printf("%d\n",max(pi,2*v));
	}
	else
	{
		printf("-1\n");
	}
	return 0;
}





