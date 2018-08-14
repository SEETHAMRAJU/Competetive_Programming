#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long unsigned int n;
	cin >> n;
	if(n>1)
	{
		if((n&(n-1)) == 0)
		{
			printf("TAK\n");
			return 0;
		}
		else
		{
			printf("NIE\n");		
			return 0;		
		}
	}
	else
	{
		printf("TAK\n");
	}
	return 0;	
}
