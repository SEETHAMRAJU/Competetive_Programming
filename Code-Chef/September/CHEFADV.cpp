#include<bits/stdc++.h>
#define append push_back
using namespace std;
vector <int> answer;
int solve(int n,int m,int x,int y);
int main()
{
	int t,x,y,n,m;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d%d%d%d",&n,&m,&x,&y);
		answer.append(solve(n,m,x,y));

	}
	
	for(int i=0;i<t;i++)
	{
		if(answer[i] == -1)
			printf("Pofik\n");
		else
			printf("Chefirnemo\n");
	}
	return 0;
}
int solve(int n,int m,int x,int y)
{
	if(n%x == m%y || x == y)
		return 1;
	
	int y1 = n%x;
	int y2 = m%y;
	if(y>x && x != 1)
	{
		if((y2 - y1)%x == 0)
			return 1;
	}
	else if(x>y && y!=1)
	{
		if((y1-y2)%y == 0)
			return 1;
	}
	return -1;
}

