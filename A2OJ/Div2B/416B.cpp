#include<bits/stdc++.h>
#define append push_back
using namespace std;
int arr[50001][6];
int finish[50001];
int main()
{
	int n,m;
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		int free = 0;
		for(int j=0;j<m;j++)
		{
			int start = max(free,finish[j]);
			finish[j] = start + arr[j][i];
			free = finish[j];
		}

	}
	for(int i=0;i<m;i++)
	{
		printf("%d ",finish[i]);	
	}
	printf("\n");
	return 0;
}





