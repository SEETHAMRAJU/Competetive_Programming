#include<bits/stdc++.h>
#define llint long long int
#define append push_back
using namespace std;
vector <llint> prime;
void primestill(llint n);
void sieve(llint m);
vector <llint> get(llint a,llint b);
int main()
{
	llint t,a,b;
	primestill(1000000000);
	printf("llllll\n");	
	scanf("%lld",&t);
	
	vector <vector<llint>> answer;
	for(int i=0;i<t;i++)
	{
		scanf("%lld%lld",&a,&b);	
		printf("llll\n");	
		vector <llint> p;
		p = get(a,b);
		answer.append(p);
		
	}
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<answer[i].size();j++)
		{
			printf("%lld\n",answer[i][j]);
		}
	}
	return 0;
}
void sieve(llint n)
{
	bool arr[n+1];
	memset(arr,true,sizeof(arr));
	for(llint i=2;i<n;i++)
	{
		if(arr[i])
		{
			for(llint j=2;i*j<n;j++)
			{
				arr[i*j] = false;
			}
		}
	}
	prime.append(0);
	for(llint i=2;i<n;i++)
	{
		if(arr[i])
			prime.append(i);
	}
}
void primestill(llint n)
{
	llint limit;
	limit = floor(sqrt(n)) + 1;
	llint high,low;
	low = 0;
	high = limit;
	while(low <n)
	{
		printf("lllllll\n");
		if(high >n)
			high = n;
		bool arr[limit+1];
		memset(arr,true,sizeof(arr));
		for(llint i=1;i<prime.size();i++)
		{
			llint lolim = floor(low/prime[i])*prime[i];
			if(lolim<low)
				lolim += prime[i]; 
			for(llint j=lolim;j<high;j+=prime[i])
			{
				arr[j-lolim] = false;
			}
		}
		for(llint i=low;i<high;i++)
		{
			if(arr[i-low])
				prime.append(arr[i-low]);
		}
		low += limit;
		high += limit;
	}
}
vector <llint> get(llint a,llint b)
{
	llint l,r,mid,req;
	l = 0;
	r = prime.size() -1;
	bool flag = true;
	mid = (l+r)/2;
	//if not working change the zero added to the prime vector 
	while(l!=r)
	{
		
		if((prime[mid-1] < a && prime[mid] >= a))
		{
			req = mid;
			
		}
		else if(prime[mid] > a)
		{
			r = mid;
		}
		else
		{
			l = mid;
		}
		if(r-l == 1)
		{
			if(prime[r]>= a && prime[l] <a)
			{	
				req = r;			
				flag = false;
				l = r;	
			}
		}
	}	
	if(l==r && flag)
	{
		if(prime[l]>=a)
			req = l;
	}
	vector <llint> p;
	for(llint i=req;prime[i]<=b;i++)
		p.append(prime[i]);
	return prime;

}
