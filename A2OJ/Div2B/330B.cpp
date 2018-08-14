#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int arr[10000];
	for(int i=0;i<n+1;i++)
	{
		arr[i] = 1;
	}
	int tot = n;
	int t1,t2;
	for(int i=0;i<m;i++)
	{
		scanf("%d%d",&t1,&t2);
		arr[t1] = 0;
		arr[t2] = 0;
	}
	int head;
	for(int i=1;i<=n;i++)
	{
		if(arr[i] == 1)
		{
			head = i;
			break;
		}
	}
	printf("%d\n",n-1);
	for(int i=1;i<=n;i++)
	{
		if(i != head)
			printf("%d %d\n",head,i);
	}
	
	return 0;
}





