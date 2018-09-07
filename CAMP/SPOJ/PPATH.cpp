#include<bits/stdc++.h>
#define append push_back
#define N 100000
using namespace std;
void sieve();
int solve(int a,int b);
int dist[10000];
vector <int> prime;
int main()
{
	int n,a,b;
	vector <int> answer;
	sieve();
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		answer.append(solve(a,b));
	}
	for(int i=0;i<n;i++)
		printf("%d\n",answer[i]);
	return 0;
}
void makegraph()
{
	for(int i=0;i<prime.size();i++)
	{
		vector  
	}
}
void sieve()
{
	bool arr[N];
	memset(arr,true,sizeof(arr));
	for(int i=2;i<N;i++)
	{
		if(arr[i])
		{
			for(int j=2;i*j<N;j++)
			{
				arr[i*j] = false;
			}
		}
	}
	for(int i=1000;i<=9999;i++)
	{
		if(arr[i])
			prime.append(i);
	}
}
int isDigit(int a,int b)
{
	int p,q;
	int n = 0;
	if(p%10 != q%10)
		n++;
	if((p/10)%10 != (p/10)%10)
		n++;
	if((p/100)%10 == (p/100)%10)
		n++;
	if((p/1000)%10 == (p/1000)%10)
		n++;
	if(n == 1)
		return 1;
	return -1;
}
int solve(int a,int b)
{
	int chk = isDigit(a,b);
	

}



