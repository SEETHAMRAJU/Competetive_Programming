#include<bits/stdc++.h>
#define append push_back
using namespace std;
int pow(int x,int n);
int main()
{
	int t;
	vector <int> answer;
	scanf("%d",&t);
	while(t>0)
	{
		int n,temp,m;
		scanf("%d %d",&n,&m);
		int count = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&temp);
			if(temp%m == 0)
				count++;
		}
		answer.append(count);
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		printf("%d\n",pow(2,answer[i])-1);
	}

	return 0;
}
int pow(int x,int n)
{
	int y= 1;
	while(n>0)
	{
		if(n%2 != 0)
			y = y * x;
		n = n/2;
		x = x*x;
	}
	return y;
}




