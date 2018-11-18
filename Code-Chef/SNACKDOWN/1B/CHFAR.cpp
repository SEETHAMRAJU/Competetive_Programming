#include<bits/stdc++.h>
#define append push_back
using namespace std;
bool solve(int n,int k,vector<int>q);
int main()
{
	int t,n,k;
	int temp;
	vector<bool>answer;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d%d",&n,&k);
		vector<int>q;	
		for(int j=0;j<n;j++)
		{
			scanf("%d",&temp);	
			q.append(temp);		
		}	
		answer.append(solve(n,k,q));
	}
	for(int i=0;i<t;i++)
	{
		if(answer[i])
			printf("YES\n");
		else	
			printf("NO\n");		
	}
	return 0;
}
bool solve(int n,int k,vector<int> q)
{
	for(int i=0;i<n;i++)	
	{
		if(q[i]>1)
			k--;
	}
	if(k<0)
		return false;
	return true;
}
