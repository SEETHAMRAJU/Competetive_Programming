#include<bits/stdc++.h>
#define append push_back
#define M 10000007
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	vector <int> answer;
	while(t>0)
	{
		int n,k,temp;
		vector <int> q;
		scanf("%d%d",&n,&k);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&temp);
			q.append(temp);
		}
		int ans = solve(q,n,k);
		answer.append(ans);
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		printf("%d\n",answer[i]);
	}
	return 0;
}
int solve(vector <int> arr,int n,int k)
{
	sort(arr.begin(),arr.end());
	long long int total = 0;
	if(n%2 == 0)
	{
		int i=1;
		while(i<n/2)
		{
			tot += (i * (power(q[i],)))	
		}
	}
	else
	{
	
	}
}




