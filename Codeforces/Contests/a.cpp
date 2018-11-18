#include<bits/stdc++.h>
#define llint long long int
#define append push_back
using namespace std;
llint arr[1001];
int main()
{

	int n;
	llint temp;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&temp);
		if(temp%2 == 0)
			arr[i] = temp-1;
		else
			arr[i] = temp;
	}
	for(int i=0;i<n;i++)
	{
		
		printf("%lld ",arr[i]);

	}
	printf("\n");
	return 0;
}





