#include<bits/stdc++.h>
#define append push_back
using namespace std;
int solve(int n);
int cnt;
int main()
{
	vector <int> answer;
	int n;
	while(1)		
	{
		scanf("%d",&n);
		if(n == 0)
			break;
		cnt++;
		answer.append(solve(n));		
	}
	for(int i=0;i<cnt;i++)
	{
		printf("%d\n",answer[i]);
	}
	return 0;
}
int solve(int n)
{
	int tot = 0;
	for(int i=n; i>0;i--)
	{
		tot = tot + i*i;
	}
	return tot;
}
