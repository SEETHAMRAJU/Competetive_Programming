#include<bits/stdc++.h>
#define append push_back
using namespace std;
int arr[1000000];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		arr[i] = i;
	for(int i=1;i<n;i+=2)
	{
		
		int temp = arr[i+1];
		arr[i+1] = arr[i];
		arr[i] = temp;
	}
	for(int i=1;i<=n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}





