#include<bits/stdc++.h>
#define append push_back
using namespace std;
int GCD(int x,int y);
int main()
{
	int n,temp;
	scanf("%d",&n);
	vector <int> q;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		q.append(temp);
	}
	int flag = GCD(q[0],q[1]);
	for(int i=2;i<n;i++)
	{
		flag = GCD(flag,q[i]);	
	}
	printf("%d\n",flag*n);
	return 0;
}
int GCD(int x,int y)
{
	int X,Y,temp;
	X = max(x,y);
	Y = min(x,y);
	while(Y!=0)
	{
		temp = X%Y;
		X = Y;
		Y = temp;
	}
	return X;
}




