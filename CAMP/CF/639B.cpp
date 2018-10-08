#include<bits/stdc++.h>
#define append push_back
using namespace std;
map<int,vector<int>> p;
int main()
{
	int n,m,d;
	scanf("%d %d %d",&n,&m,&d);
	if(d == 1 || d>2*h)
		printf("-1\n");
	else if(d!=h)
	{
		for(int i=1;i<=n;i++)
		{
			vector<int> o;
			p[i] = o;
		}
		//Please check the conditions for the given h and d > or >= 
		for(int i=1;i<h || i <d;i++)
		{
			p[i].append(i+1);
			p[i+1].append(i);
		}
		if(d>h)
		{
			for(;i<n;i++)
			{
				p[1].append(i+1);
				p[i+1]
			}
		}
		

	}
	return 0;
}





