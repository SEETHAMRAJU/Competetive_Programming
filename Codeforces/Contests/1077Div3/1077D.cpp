#include<bits/stdc++.h>
#define SIZE 1000000
using namespace std;
int arr[SIZE];
int cnt[SIZE];
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		cnt[arr[i]]++;
	}
	vector<pair<int,int>>q;
	for(int i=1;i<SIZE;i++)
	{
		if(cnt[i] != 0)
		{
			q.append(make_pair(cnt[i],i));
		}
	}
	sort(q.begin(),q.end());
	reverse(q.begin(),q.end());
	for(int i=0;i<k;i++)
	{
		
	}
	return 0;
}
