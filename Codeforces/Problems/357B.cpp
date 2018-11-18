#include<bits/stdc++.h>
#define append push_back
using namespace std;
int cl[100005];
int main()
{
	int n,m,a,b,c;
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		if(cl[a] == 0 && cl[b] == 0 && cl[c] == 0)
		{
			cl[a] = 1;
			cl[b] = 2;
			cl[c] = 3;
		}
		else if(cl[a] != 0)
		{
			if(cl[a] == 1)
			{
				cl[b] = 2;
				cl[c] = 3;
			}
			else if(cl[a] == 2)
			{
				cl[b] = 1;
				cl[c] = 3;
			}
			else if(cl[a] == 3)
			{
				cl[b] = 1;
				cl[c] = 2;
			}
		}
		else if(cl[b] != 0)
		{
			if(cl[b] == 1)
			{
				cl[a] = 2;
				cl[c] = 3;
			}
			else if(cl[b] == 2)
			{
				cl[a] = 1;
				cl[c] = 3;
			}
			else if(cl[b] == 3)
			{
				cl[a] = 1;
				cl[c] = 2;
			}			
		}
		else if(cl[c] != 0)
		{
			if(cl[c] == 1)
			{
				cl[b] = 2;
				cl[a] = 3;
			}
			else if(cl[c] == 2)
			{
				cl[b] = 1;
				cl[a] = 3;
			}
			else if(cl[c] == 3)
			{
				cl[b] = 1;
				cl[a] = 2;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d ",max(cl[i],1));
	}
	printf("\n");
	return 0;
}





