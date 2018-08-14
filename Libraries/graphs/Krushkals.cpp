#include<bits/stdc++.h>
#define append push_back
#define F(i,n,i++) for(int i=0;i<n;i++)
using namespace std;
int *changecolor(int *c,int i,int j);
list <int> *Krushkals(list <int> *adj,int n);
int main()
{
	int n;
	cin >> n;
	list <int> *adj;
	adj = new list <int> (n);
	list <int> *MST;
	MST = Krushkals(adj,n);
	return 0;
}
int *changecolor(int *c,int a,int b,int n)
{
	for(int i=0;i<n;i++)
	{
		if(c[i] == a)
			c[i] = b;
	}
	return c;
}
list <int> *Krushkals(list <int> *adj,int n)
{
	int c[n+1];
	F(i,n+1,i++)
	{
		c[i] = i;
	}
	
	
}




