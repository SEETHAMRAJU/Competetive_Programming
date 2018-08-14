#include<bits/stdc++.h>
#define append push_back
#define llint long long int
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	vector <llint> answer;
	while(t>0)
	{
		int n;
		llint temp;
		scanf("%d",&n);
		vector <llint> q,arr;
		scanf("%lld",&temp);
		q.append(temp);
		arr.append(temp);
		for(int i=1;i<n;i++)
		{
			scanf("%lld",&temp);
			q.append(temp);
			arr.append(arr[i-1] + temp);
		}
		llint tot = 0;
		for(int i=n-1;i>0;i--)
		{
			tot += (i*q[i] - arr[i-1]);
		}
		answer.append(tot);
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		printf("%lld\n",answer[i]);
	}

	return 0;
}





