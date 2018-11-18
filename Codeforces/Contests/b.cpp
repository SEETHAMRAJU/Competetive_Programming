#include<bits/stdc++.h>
#define append push_back
using namespace std;
int arr[2001];
int main()
{
	int n,k,temp;
	scanf("%d%d",&n,&k);
	vector <int> q;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		q.append(temp);
	}
	sort(q.begin(),q.end());
	reverse(q.begin(),q.end());
	int tot = 0;
	for(int i=0;i<k;i++)
	{
		tot += q[i];
		arr[i] = 1;
	}
	








	printf("%d\n",tot);
	for(int i=0;i<k;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}

