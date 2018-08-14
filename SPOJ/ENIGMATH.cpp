#include<bits/stdc++.h>
#define append push_back
using namespace std;
int GCD(int x,int y)
{
	int temp,p,q;
	q = min(x,y);	
	p = max(x,y);
	while(q>=1)
	{
		temp = p%q;
		p = q;
		q = temp;
	}
	return p;
}

int main()
{
	int t,b,a;
	scanf("%d",&t);
	vector <pair<int,int>> answer;
	for(int i=0;i<t;i++)
	{
		scanf("%d%d",&a,&b);
		int p = GCD(a,b);
		answer.append(make_pair(b/p,a/p));		
	}	
	for(int i=0;i<t;i++)
	{
		printf("%d %d\n",answer[i].first,answer[i].second);
	}
}
