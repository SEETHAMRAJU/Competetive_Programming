#include<bits/stdc++.h>
#define append push_back
#define N 200001
using namespace std;
deque<int>p;
int arr[N];
int solve(int temp);
int main()
{
	int n,temp;
	scanf("%d",&n);
	vector<int> q,answer;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		arr[temp] = 1;
		p.push_back(temp);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		answer.append(solve(temp));
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",answer[i]);
	}
	printf("\n");
	return 0;
}
int solve(int t)
{
	int total = 0;
	if(arr[t] != 0)
	{
		while(p.front() != t)
		{
			arr[p.front()]--;
			total++;
			p.pop_front();
		}
		arr[p.front()]--;
		p.pop_front();
		total++;
	}
	return total;
}




