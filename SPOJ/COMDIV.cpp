#include<bits/stdc++.h>
#define append push_back
using namespace std;
int solve(int x,int y)
{
	int count = 0;
	int i=1;
	while(i<=min(x,y))
	{
		if(x%i == 0 && y%i == 0)
			count++;
		
		i++;
	}
	return count;
}
int main()
{
	int T,x,y;
	scanf("%d",&T);
	vector <int> answer;
	for(int i=0;i<T;i++)
	{
		scanf("%d%d",&x,&y);
		answer.append(solve(x,y));
	}
	for(int i=0;i<T;i++)
	{
		printf("%d\n",answer[i]);
	}
	return 0;
}
