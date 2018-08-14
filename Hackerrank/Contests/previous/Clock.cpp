#include<bits/stdc++.h>
using namespace std;
int solve(int h1,int m1,int h2,int m2,int k);
int main()
{
	int t;
	vector <int> q;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		int k,h1,m1,h2,m2;
		scanf("%d%d%d%d%d",&h1,&m1,&h2,&m2,&k);
		q.append(solve(h1,m1,h2,m2,k));
	}
	for(int j=0;j<t;j++)
	{
		printf("%d\n",q[j]);
	}
	pritnf("\n");
	return 0;	
}
int solve(int h1,int m1,int h2,int m2,int k)

{
	h1 = h1 + k;
	int count = 0;	
}
