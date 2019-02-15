#include<bits/stdc++.h>
#define SIZE 1000000
#define llint long long int
using namespace std;
llint maxi(llint y,llint x)
{
	if(x<y)
		return y;
	return x;
}
llint arr[SIZE];
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
		scanf("%lld",&arr[i]);
	sort(arr,arr+n);
	llint sub = 0;
	for(int i=0;i<n && k>0;i++)
	{	
		while(i<n && arr[i] == 0 || arr[i] - sub == 0)
			i++;
		printf("%lld\n",maxi(0,arr[i]-sub));
		sub = arr[i];
		arr[i] = 0;
		k--;
	}
	while(k > 0)
	{
		cout << "0" << endl;	
		k--;	
	}
	return 0;
}
