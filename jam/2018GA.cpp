#include<bits/stdc++.h>
#define append push_back
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	for(int o=0;o<t;o++)
	{
		int n;
		scanf("%d",&n);
		vector<int>q;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&p);
			q.append(p);
		}
		answer.append(solve(q,n));
	}
	for(int i=0;i<n;i++)
	{
		printf("%d\n",answer[i]);
	}
	return 0;
}
int solve(vector<int> q,int n)
{
	sort(q.begin(),q.end());
	ll answer = 0;
	int arr[N];
	memset(arr,0,sizeof(arr));
		
}




