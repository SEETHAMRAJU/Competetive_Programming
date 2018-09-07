#include<bits/stdc++.h>
#define append push_back
using namespace std;
int check(int a,int b,int c,int d);
int main()
{
	int n;
	scanf("%d",&n);
	vector <int> answer;
	for(int i=0;i<n;i++)
	{
		int x1,x2,y1,y2;
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		answer.append(check(x1,y1,x2,y2));

	}
	string p[4] = {"left","right","up","down"};
	for(int i=0;i<n;i++)
	{
		if(answer[i] != -1)
		{
			cout << p[answer[i]] << endl;
		}
		else
			printf("sad\n");
	}
	return 0;
}
int check(int x1,int y1,int x2,int y2)
{
	if(x1 == x2 )
	{
		if(y1>y2)
			return 3;
		else
			return 2;
	}
	else if(y1 == y2)
	{
		if(x1>x2)
			return 0;
		else
			return 1;
	}
	else
	{
		return -1;
	}
}




