#include<bits/stdc++.h>
#define llint long long int 
#define append push_back
using namespace std;
llint maxi(llint x,llint y)
{
	if(y>x)
		return y;
	return x;
}
llint arr[100001];
llint f[100001];
int main()
{
	llint n,temp;
	scanf("%lld",&n);
	for(llint i=0;i<n;i++)
	{
		scanf("%lld",&temp);
		arr[temp]++;
	}
	f[0] = 0;
	f[1] = arr[1];
	for(llint i=2;i<n+1;i++)
	{
		f[i] = maxi(arr[i]*i+f[i-2],f[i-1]);
	}
	
	printf("%lld\n",f[n]);
	return 0;
}





