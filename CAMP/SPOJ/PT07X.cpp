#include<bits/stdc++.h>
#define append push_back
#define SIZE 1000000
using namespace std;

int main()
{
	int n;
	for(int i=0;i<n-1;i++)
	{
		scanf("%d %d",&x,&y);
		p.append(make_pair(x,y));
		deg[x]++;
		deg[y]++;
	}

	return 0;
}





