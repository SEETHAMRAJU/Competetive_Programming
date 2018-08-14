#include<bits/stdc++.h>
#define append push_back
using namespace std;
int arr[300001];
int main()
{
	int n,m,maxsofar;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int tot = 0;
	int i=0;
	for(;tot<=m;i++)
	{
		tot += arr[i];	
	}
	tot -= arr[--i];
	int j=0;
	maxsofar = tot;
	printf("%d\n",tot);
	for(;i<n;i++)
	{
		tot -= arr[j];
		j++;
		tot += arr[i];
		if(tot <=m)
			maxsofar = max(maxsofar,tot);
	}

	printf("%d\n",maxsofar);
	return 0;
}






