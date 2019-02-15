#include<bits/stdc++.h>
#define append push_back
#define M 1000000007
#define SIZE 1000000
using namespace std;
int a[1000005];
int main()
{
	int n,k;
	string s;
	scanf("%d%d",&n,&k);
	int count = 0;
	for(int i=0;i<=n;i++)
	{
		cin >> s;
		if(s == "?")
		{
			a[i] = INT_MAX;count++;
		}
		else
			a[i] = stoi(s);
	}
	if(k == 0)
	{
		if(a[0] && a[0]!= INT_MAX)
			printf("No\n");
		else
			printf("Yes\n");
		return 0;
	}
	if(count == 0)
	{
		long long int sum=0;
		for(int i=n;i>=0;i--)
		{
			sum = (sum *k)%M + (a[i])%M;
		}
		if(sum)
			printf("No\n");
		else
			printf("Yes\n");
		return 0;
	}
	
	if((n+1)%2 == 0) //||  (n+1)%2 == 1 && count%2 ==0)
		printf("Yes\n");
	else 
		printf("No\n");
	return 0;
}





