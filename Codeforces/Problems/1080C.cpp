#include<bits/stdc++.h>
#define append push_back
#define llint long long int
#define SIZE 1000000
using namespace std;
llint getBlocks(llint n,llint m);
llint solve(llint n,llint m,llint x1,llint y1,llint x2,llint y2);
int main()
{
	int t;
	scanf("%d",&t);
	llint m,n;
	scanf("%lld%lld",&n,&m);
	for(int i=0;i<t;i++)
	{
		scanf("%lld%lld",&n,&m);
		scanf("%lld%lld%lld%lld%lld%lld%lld%lld",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		printf("%lld",solve(n,m,x1,y1,x2,y2,x3,y3,x4,y4));
	}
	return 0;
}
llint getBlocks(llint n,llint m)
{
	llint white,black;
	if(n%2 == 1 && m%2 == 1)
	{
		white = m - (n/2) + n - (m/2);
		black = n + m - 1 - white;
	}
	else if(n%2 == 1)
	{
		white = m/2;
		black = m/2;
	}
	else if(m%2 == 1)
	{
		white = n/2;
		black = n/2;
	}
	else
	{
		white = 0;
		black = 0;
	}
	white = white + (n*m)/2;
	black = black + (m*n)/2;
	vector<llint>o;
	o.append(white);
	o.append(black);
	return 
}
llint solve(llint n,llint m,llint x1,llint y1,llint x2,llint y2,llint x3,llint y3,llint x4,llint y4)
{
	if(x2<x3 || y2<y3)	
	{
		white = 
	}
	else if(x2>x3 && y2>y3)
	{
	
	}
	else if(x2 == x3 && y2 == y3)
	{
		
	}

}





