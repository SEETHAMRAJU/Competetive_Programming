#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	scanf("%lld",&n);
	if(n == 0)
	{
		printf("1\n");
		return 0;
	}
	/*
	1 = 8	 5 	
	2 = 4    6
	3 = 2	 7 
	4 = 6	 8 
	*/
	//            0 1 2 3 
	int arr[5] = {6,8,4,2};
	if(n>=4)
		printf("%d\n",arr[n%4]);
	else
		printf("%d\n",arr[n]);
	return 0;
}
