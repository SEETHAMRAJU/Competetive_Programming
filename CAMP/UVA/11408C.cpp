#include<bits/stdc++.h>
#define append push_back
#define N 5000001
using namespace std;
void sieve();
vector <int> prime;
int check(int n);
int primes[N];
int arr[N];
void proccess();
int solve(int a,int b);
int main()
{
	int count = 0;
	vector <int> answer;
	sieve();
	proccess();
	printf("Hola\n");
	while(1)
	{
		int x,y;
		scanf("%d",&x);
		if(x == 0)
			break;
		scanf("%d",&y);
		answer.append(solve(x,y));
		count++;
	}
	for(int i=0;i<count;i++)
	{
		printf("%d\n",answer[i]);
		
	}
	return 0;
}
int solve(int x,int y)
{
	return arr[y] - arr[max(x-1,0)];

}
void sieve()
{
	for(int i=0;i<N;i++)
		primes[i] = true;
	for(int i=2;i<N;i++)
	{
		if(primes[i])
		{
			for(int j=2;i*j<N;j++)
			{
				primes[i*j] = false;
			}
		}
	}
	for(int i=2;i<N;i++)
	{
		if(primes[i])
			prime.append(i);
	}
}
void proccess()
{
	printf("kk");
	for(int i=2;i<N;i++)
	{
		arr[i] = check(i);
	}
	printf("kk");
	for(int i=2;i<N-1;i++)
	{
		arr[i+1] = arr[i+1] + arr[i];
	}
}

int check(int n)
{
	int sum = 0;
	for(int i=0;prime[i]*prime[i] < n;i++)
	{
		if(n%prime[i] == 0)
		{
			sum += n;
			n = n/prime[i];
		}
	}
	if(primes[sum])
		return 1;
	return 0;
}




