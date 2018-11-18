#include<bits/stdc++.h>
#define append push_back
#define N 1000000
using namespace std;
vector <int>solve(int p,vector <int> q);
int main()
{
	vector <vector<int>> ans;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int p,temp;
		vector <int> q;
		scanf("%d",&p);
		for(int j=0;j<p;j++)
		{
			scanf("%d",&temp);
			q.append(temp);
		}
		ans.append(solve(p,q));
	}
	for(int i=0;i<n;i++)
	{
		printf("%d %d %d %d\n",ans[i][0],ans[i][1],ans[i][2],ans[i][3]);
		
	}

	return 0;
}
vector <int> solve(int p,vector <int> q)
{
	int arr[N];
	vector <int> ans;
	for(int i=0;i<N;i++)
	{
		arr[i] = 0;
	}
	for(int i=0;i<p;i++)
	{
		arr[q[i]]++;
	}
	int l = 0;
	int r = 1;
	while(l < N && r < N)
	{
		if(arr[l]>4 || arr[r]>4)
		{
			if(arr[l]>4)
			{
				ans.append(l);
				ans.append(l);
				ans.append(l);
				ans.append(l);
			}
			else
			{
				ans.append(r);
				ans.append(r);
				ans.append(r);
				ans.append(r);
			}
			return ans;
		}
		else if(arr[l] > 1 && arr[l] < 4)
		{
			while(arr[r] < 2)
			{	
				r++;
			}
			ans.append(l);
			ans.append(l);
			ans.append(r);
			ans.append(r);
			return ans;
		}
		else
		{
			l++;
			r++;
		}
	}
}


