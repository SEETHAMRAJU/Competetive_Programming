#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	long int f,g,s,u,d;
	cin >> f >> s >> g >> u >> d;
	list <int> *adj;
	adj = new list <int> (f+1);
	int c[f+1];
	for(int i=0;i<f+1;i++)
	{
		c[i] = 0;
	}
	for(int i=g;i>0;i =i - u)
	{
		c[i] = 2;
	}

	return 0;
}





