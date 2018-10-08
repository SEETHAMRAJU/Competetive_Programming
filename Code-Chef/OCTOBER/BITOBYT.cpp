#include<bits/stdc++.h>
#define append push_back
using namespace std;
vector<int> solve(int n);
int main()
{
	int t,n;
	scanf("%d",&t);
	vector<vector<int>>answer;
	for(int i=0;i<t;i++)
	{
		scanf("%d",&n);
		answer.append(solve(n));
	}
	for(int i=0;i<t;i++)
	{
		printf("%d %d %d\n",answer[i][0],answer[i][1],answer[i][2]);
	}
	return 0;
}
vector<int> solve(int n)
{
	int a,b;
	a = n/28+1;
	b = n%28;
	vector<int>o;
	if(b<=2)
	{
		o.append(a);
		o.append(0);
		o.append(0);
	}
	else if(b>=3 && b<11)
	{
		o.append(0);
		o.append(a);
		o.append(0);
	}
	else if(b>=11 && b<=27)
	{
		o.append(0);
		o.append(0);
		o.append(a);
	}
	return o;
}




