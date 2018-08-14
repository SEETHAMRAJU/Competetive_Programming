#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int count = 0;
	vector <pair<int,int>> q;
	while(1)
	{
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		if(x == 0 && y == 0 && z == 0)
			break;
		if(y - x == z - y && z + x == 2*y)
		{
			q.append(make_pair(0,z + (y-x)));
		}
		else
		{
			q.append(make_pair(1,z*(y/x)));
		}
		count++;
	}
	for(int i=0;i<count;i++)
	{
		if(q[i].first == 0)
			printf("AP %d\n",q[i].second);
		else
			printf("GP %d\n",q[i].second);
	}
	return 0;
}





