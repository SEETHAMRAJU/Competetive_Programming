#include<bits/stdc++.h>
#define append push_back
#define M 1048576
using namespace std;
void generatemaxsegment(int N,int n);
int query(int l,int r,int N);
int makeit(double n);
int maxi(int x,int y,int z);
//Required Arrays
int arr[M],segment[M],check[M];

int main()
{
	double n;
	vector <int> answer;	
	scanf("%lf",&n);
	for(int i=0;i<(int)n;i++)
	{	
		scanf("%d",&arr[i]);		
	}
	int N;
	N = makeit(n);
	generatemaxsegment(N,(int)n);
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++)	
	{
		int x,y;
		scanf("%d%d",&x,&y);
		answer.append(query(x-1,y-1,N));	
	}
	for(int i=0;i<2*N;i++)
	{
		printf("%d ",segment[i]);
	}	
	for(int i=0;i<answer.size();i++)
	{
		printf("%d\n",answer[i]);
	}
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
//Main idea of the segment tree
void generatemaxsegment(int N,int n)
{
	int i=0;
	for(i=N;i<N+n;i++)
	{
		segment[i] = arr[i-N];
	}
	for(i;i<=2*N-1;i++)
	{
		segment[i] = 0;
	}
	for(i=N-1;i>=0;i--)		
	{
		if(segment[2*i] < segment[2*i] + segment[2*i + 1] || segment[2*i] < segment[2*i] && segment[2*i+1] > segment[2*i] + segment[2*i+2])
		{
			check[i] = 1;
			segment[i] = max(segment[2*i],segment[2*i+1]+segment[2*i]);
		}
		else
		{
			check[i] = 0;
			segment[i] = segment[2*i] ;
		}	
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
int maxi(int x,int y,int z)
{
	return max(z,max(x,y));
}

