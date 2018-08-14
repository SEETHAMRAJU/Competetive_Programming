#include<bits/stdc++.h>
#define append push_back
using namespace std;
bool arr[1000000];
void sieve(int n);
int main()
{
	int n;
	scanf("%d",&n);
	sieve(n);
	for(int i=2;i<=n;i++)
	{
		if(arr[i])
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}
void sieve(int n)
{
	memset(arr,true,sizeof(arr));
	arr[2] = true;

	for(int i=2;i<=n;i++)
	{
		if(arr[i] == true)
		{
			for(int j=2;j*i<=n;j++)
			{
				arr[j*i] = false;
			}
		}
	}
}





