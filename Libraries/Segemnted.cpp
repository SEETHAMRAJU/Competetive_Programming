#include<bits/stdc++.h>
#define append push_back
#define N 1000000
#define llint long long int 
using namespace std;
void primestill(llint n);
void sieve(llint m);
vector <llint> prime;

int main()
{
	llint n;
	scanf("%lld",&n);
	primestill(n);
	for(llint i=0;i<prime.size();i++)
	{
		printf("%lld ",prime[i]);
	}
	cout << endl;
	return 0;
}

void sieve(llint m)
{
	int *arr;
	arr = new int [m];
	for(llint i=0;i<m;i++)
	{
		arr[i] = 1;	
	}
	for(llint i=2;i<m;i++)
	{
		if(arr[i] == 1)
		{
			for(llint j=2;i*j<m;j++)
				arr[j*i] = 0;
		}
	}
	for(llint i=2;i<m;i++)
	{
		if(arr[i])
			prime.append(i);
	}
}
void primestill(llint n)
{
	llint limit = floor(sqrt(n)) + 1;
	sieve(limit);	
	llint low = limit;
	llint high = 2*limit;
	while(low <n)
	{
		if(high >= n)
			high = n;
		bool arr[limit+1];
		memset(arr,true,sizeof(arr));
		for(llint i=0;i<prime.size();i++)
		{
			llint lolim = floor(low/prime[i])*prime[i];
			if(lolim < low)
				lolim += prime[i];
			for(llint j=lolim;j<high;j += prime[i])
				arr[j-lolim] = false;
		}
		for(llint i=low;i<high;i++)
		{
			if(arr[i-low] == true)
				prime.append(i);
		}
		low += limit;
		high += limit;
	}
}

