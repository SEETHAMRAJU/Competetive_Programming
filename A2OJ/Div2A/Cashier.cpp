#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n,temp;
	scanf("%d",&n);
	vector <int> q;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		q.append(temp);
	}
	int minsofar = INT_MAX;
	for(int i=0;i<n;i++)
	{
		int tot = 0;
		for(int j=0;j<q[i];j++)
		{
			scanf("%d",&temp);
			tot = tot + 15 + 5*temp;
		}
		minsofar = min(tot,minsofar);
	}
	printf("%d\n",minsofar);	
	
	return 0;
}





