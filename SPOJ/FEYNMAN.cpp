#include<bits/stdc++.h>
#define append push_back
using namespace std;
int arr[101];
int main()
{
	int t=0;
	vector <long long int> q;
	while(1)
	{
		long long int n;
		scanf("%lld",&n);
		if(n == 0)
			break;
		else
		{
			t++;
			n = (n*(n+1)*(2*n+1))/6;
			q.append(n);
		}
	}
	for(int i=0;i<t;i++)
	{
		printf("%lld\n",q[i]);
	}
	return 0;
}





