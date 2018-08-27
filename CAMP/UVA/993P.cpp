#include<bits/stdc++.h>
#define append push_back
using namespace std;
int solve(llint n);
map <int,int> hash;
int main()
{
	for(int i=1;i<10;i++)
	{
		hash[i]= 0;
	}
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		long long int p;
		scanf("%lld",&p);
		ans.append(solve(p));
	}
	for(int i=0;i<n;i++)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
}
int solve(llint n);
{
	int i = 9;
	while(n>1 && i>0)
	{
		while(n%i == 0)
		{
			n=n/i;
			hash[i]++;
		}
		i--;
	}

}




