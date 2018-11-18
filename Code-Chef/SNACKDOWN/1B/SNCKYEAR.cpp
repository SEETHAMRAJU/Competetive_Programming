#include<bits/stdc++.h>
#define append push_back
#define N 2100
using namespace std;
int main()
{
	int a[N];
	memset(a,false,sizeof(a));
	int t,temp;
	vector<bool>answer;
	a[2015]=true;a[2010]=true;a[2016]=true;a[2017]=true;a[2019]=true;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d",&temp);
		answer.append(a[temp]);
	}
	for(int i=0;i<t;i++)
	{
		if(answer[i])
			printf("HOSTED\n");
		else
			printf("NOT HOSTED\n");
	}
	return 0;
}
