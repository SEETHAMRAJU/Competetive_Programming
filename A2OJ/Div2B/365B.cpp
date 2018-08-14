#include<bits/stdc++.h>
#define append push_back
#define llint long long int 
using namespace std;
int arr[1000000];
int main()
{
	int n;
	scanf("%d",&n);
	vector <llint> q;
	llint temp;
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&temp);
		q.append(temp);
	}
	for(int i=1;i<n-1;i++)
	{
		if(q[i] == q[i+1] - q[i-1])
		{
			arr[i] = 1;
		}
	}
	arr[0] = 0;
	arr[n-1] = 0;
	int maxsofar = min(0,n);
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] == 1)
			count++;
		else if(arr[i] == 0)
		{
			maxsofar = max(count,maxsofar);
			count = 0;
		}
	}
	maxsofar = max(count,maxsofar);
	printf("%d\n",min(maxsofar+2,n));
	return 0;
}





