#include<bits/stdc++.h>
#define append push_back
using namespace std;
int subarray(vector <int> arr,int n);
int subseq(vector <int> arr,int n);
int main()
{
	int t,temp,n;
	scanf("%d",&t);
	vector <pair<int,int>> answer;
	while(t>0)
	{
		scanf("%d",&n);
		vector <int> q;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&temp);
			q.append(temp);
		}
		int tot,tot1;
		tot = subarray(q,n);
		tot1 = subseq(q,n);
		answer.append(make_pair(tot,tot1));
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		printf("%d %d\n",answer[i].first,answer[i].second);
	}
	return 0;
}
int subarray(vector <int> arr,int n)
{
	int maxsofar = arr[0];
	int cmax = arr[0];
	for(int i=1;i<n;i++)
	{
		cmax = max(cmax+arr[i],arr[i]);
		maxsofar = max(cmax,maxsofar);
	}
	return maxsofar;
}
int subseq(vector <int> arr,int n)
{
	int tot = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=0)
			tot+=arr[i];
		
	}
	int maxsofar = INT_MIN;
	if(tot == 0)
	{
		for(int i=0;i<n;i++)
			tot = max(arr[i],maxsofar);
	}
	return tot;
}




