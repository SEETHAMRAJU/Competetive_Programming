#include<bits/stdc++.h>
#define append push_back
using namespace std;
bool prime[1000005];
void Sieve(int N);
int solve(int n);
int main()
{
	int n,req;
	scanf("%d",&n);
	Sieve(n);
	vector <int> answer;
	int ans = solve(n);
	answer.append(n);
	while(ans != 1)
	{
		n = n/ans;
		answer.append(n);
		ans = solve(n);
	}
	for(int i=0;i<answer.size();i++)
	{
		printf("%d ",answer[i]);
	}
	printf("\n");
	return 0;
}
int solve(int n)
{
	for(int i=2;i<=n;i++)
	{
		if(prime[i])
		{
			if(n%i == 0)
				return i;
		}
	}
	return 1;
}
void Sieve(int n)
{
	memset(prime,true,sizeof(prime));
	for(int i=2;i<=n;i++)
	{
		if(prime[i] == true)
		{
			for(int j=2;i*j<=n;j++)
			{
				prime[i*j] = false;			
			}
		}
	}
}




