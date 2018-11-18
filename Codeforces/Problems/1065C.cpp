#include<bits/stdc++.h>
#define append push_back
#define ll long long int
#define N 200002
using namespace std;
int arr[N];
int main()
{
	int n,temp;
	ll k;
	vector<int> q;
	scanf("%d %lld",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		q.append(temp);
	}
	sort(q.begin(),q.end());
	for(int i=n-1;i>=0;i--)
		arr[i] = arr[i+1] + q[i];
	int answer = 0;
	for(int i=n-2;i>0;i--)
	{
		if(k>= sum)	
	}
	int present = k;
	int slices = 0;
	for(int i=n-1;i>=0;i--)
	{
		arr[i] = q[i] - q[0];
		present -= arr[i];
		if(present<=0)
		{
			present +=  k;
			slices++;
		}
	}
	printf("%d\n",slices+1);
	return 0;
}





