#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	if(n<3)
	{
		printf("No\n");
	}
	else
	{
		int arr[45001];
		int total =0;
		arr[0] = 0;
		for(int i=1;i<=n;i++)
		{
			arr[i] = i;
			total += i;
		}
		for(int i=2;i<=n;i++)
		{
			if((total-i)%i == 0)
			{
				printf("Yes\n1 %d\n%d ",i,n-1);
				for(int k=1;k<=n;k++)
				{
					if(k != i)
					{
						printf("%d ",k);
					}
				}
				printf("\n");
				return 0;
			}
		}
	}
	return 0;
}





