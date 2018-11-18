#include<bits/stdc++.h>
#define append push_back
using namespace std;
int solve(int n);
int maxi(int e,int f,int g,int h);
int a,b,c;
int arr[4005];
int main()
{
	int n;
	vector <int> q;
	q.append(0);
	q.append(0);
	q.append(0);
	for(int i=0;i<4005;i++)
	{
		arr[i] = -3;
	}
	scanf("%d%d%d%d",&n,&q[0],&q[1],&q[2]);
	sort(q.begin(),q.end());
	a = q[0];
	b = q[1];
	c = q[2];
	arr[0] = 0;
	for(int i=1;i<a;i++)
	{
		arr[i] = -2;
	}
	arr[a] = 1;
	if(b%a != 0)
		arr[b] = 1;
	
	int ans = solve(n);
	
	printf("%d\n",ans);
	return 0;
}
int solve(int n)
{
	if(n>0 && arr[n] != -3)
	{
		return arr[n]; 
	}
	else if(n == 0)
	{
		return 0;	
	}
	else if(n < 0)
	{
		return -5;
	}
	else
	{
		int x = solve(n-a);
		int y = solve(n-b);
		int z = solve(n-c);
		arr[n] = maxi(0,1+x,1+y,1+z);
		if(arr[n] <=0)
			arr[n] = -1;
		return arr[n];
	}
}
int maxi(int e,int f,int g,int h)
{
	return max(max(e,f),max(g,h));
}



