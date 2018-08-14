#include<bits/stdc++.h>
#define append push_back
#define M 100000007
using namespace std;
void fib(int n);
int arr[5000010];
int main()
{
	int t,n;
	scanf("%d",&t);
	vector <int> q;
	int maxsofar = -100;
	for(int i=0;i<t;i++)
	{
		scanf("%d",&n);
		q.append(n);
		maxsofar = max(n,maxsofar);
	}
	fib(maxsofar);
	for(int i=0;i<t;i++)
	{
		printf("%d\n",arr[q[i]]);
	}

	return 0;
}
void fib(int n)
{
	arr[1] = 1;
	arr[2] = 1;
	for(int i=3;i<=n;i++)
	{
		arr[i] = (arr[i-1] + arr[i-2])%M;
	}
}




