#include<bits/stdc++.h>
#define M 1048576
//#define M 100
using namespace std;
void update(int i,int x,int N);
void generatemaxsegment(int N,int n);
int query(int l,int r,int N);
int makeit(double n);

int arr[M];
int segment[M];

int main()
{
	double n;
	scanf("%lf",&n);
	for(int i=0;i<(int)n;i++)
	{
		scanf("%d",&arr[i]);		
	}
	int N;
	N = makeit(n);
	generatemaxsegment(N,(int)n);
	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d\n",query(x,y,N));
	return 0;
}

int makeit(double n)
{
	double y = log(n) / log(2);
	y = ceil(y);
	return pow(2,y);	
}
int power(int x,double y)
{
	int res = 1;
	int p = (int)y;
	while(p>0)
	{
		if(p%2 == 1)
			res = res *x;
		p = p/2;
		x = x*x;
	}
	return res;
}
//N is a power of 2 and n is the actual number
void generatemaxsegment(int N,int n)
{
	int i=0;
	//Making the leaf nodes of the segment array 
	for(i=N;i<N+n;i++)
	{
		segment[i] = arr[i-N];
	}
	for(i;i<=2*N-1;i++)
	{
		segment[i] = INT_MIN;
	}
	for(i=N-1;i>=0;i--)		
	{
		segment[i] = max(segment[2*i] , segment[2*i+1]);
	}
}
void update(int i,int x,int N)
{
	segment[i+N] = x;
	i = i + N;
	while(i>1)
	{
		if(i%2 == 0)
			segment[i/2] = max(segment[i] , segment[i+1]);
		else
			segment[i/2] = max(segment[i-1],segment[i]);
		i = i/2;
	}
}
int query(int l,int r,int N)
{
	int res=INT_MIN;
	for(l += N,r+= N;l<r;l=l/2,r=r/2)
	{
		if(l%2 == 1)
			res = max(res,segment[l++]);
		if(r%2 == 1)
			res = max(res,segment[--r]);
	}
	return res;
}

