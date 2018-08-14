#include<bits/stdc++.h>
#define append push_back
#define llint long long int 
using namespace std;
int longest_sb(int *arr,int n,long long t);
int main()
{
	int n;
	long long int t;
	int arr[100005];
	cin >> n >> t;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	int answer = longest_sb(arr,n,t);
	while(answer == 0 && t>0)
	{
		answer = longest_sb(arr,n,--t);
	}
	printf("%d\n",answer);
	return 0;
}
int longest_sb(int *arr,int n,long long int t)
{
	map <int,int> m;
	int mlen =0;
	llint sum=0;
	for(int i=0;i<n;i++)
	{
		sum += arr[i];
		if(sum == t)
			mlen = i+1;
		if(m.find(sum) == m.end())
			m[sum] = i;
		if(m.find(sum-t) != m.end())
			if(mlen < i-m[sum-t])
				mlen = i - m[sum-t];
	}
	return mlen;
}
