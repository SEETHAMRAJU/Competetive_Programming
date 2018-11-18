#include<bits/stdc++.h>
#define append push_back
using namespace std;
int arr[52][52];
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int flag = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
			if(i == n-1 || j == m-1 || i == 0 || j == 0)
			{
				if(arr[i][j] == 1)
					flag = 1;
			}
		}
	}
	if(flag == 0)
	{
		printf("4\n");
	}
	else
	{
		printf("2\n");
	}
	return 0;
}





