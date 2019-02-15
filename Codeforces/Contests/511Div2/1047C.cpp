#include<bits/stdc++.h>
#define append push_back
#define N 20000000
using namespace std;
int ans[N];
int prime[N];
int arr[N];
void sieve();
int gcd(int x,int y);
int main()
{
	int n,c,answer;
	answer = INT_MIN;
	sieve();
	scanf("%d",&n);
	scanf("%d",&arr[0]);
	c = arr[0];
	for(int i=1;i<n;i++)
	{
		scanf("%d",&arr[i]);
		c = gcd(c,arr[i]);
	}
	for(int i=0;i<n;i++)
		arr[i] = arr[i]/c;
	int temp;
	for(int i=0;i<n;i++)
	{
		temp = arr[i];
		while(temp>1)
		{
			int p = prime[temp];
			answer = max(answer,++ans[p]);
			while(temp%prime[p] == 0)
				temp = temp/prime[p];
		}
	}
//	for(int i=1;i<=30;i++)
//		printf("%d->%d\n",i,prime[i]);
	if(answer<= 0)
		printf("-1\n");
	else
		printf("%d\n",n-answer);
	return 0;
}
void sieve()
{
	for(int i=0;i<N;i++)
		prime[i] = i;
	for(int i=2;i<N;i++)
	{
		if(prime[i] == i)
		{
			for(int j=2*i;j<N;j+=i)
			{
				if(prime[j] == j)
					prime[j] =  i;		
			}
		}
	}
}
int gcd(int x,int y)
{
	int temp,a,b;
	a = max(x,y);
	b = min(x,y);
	while(b!=0)
	{
		temp = a%b;
		a = b;
		b = temp;
	}
	return a;
}



