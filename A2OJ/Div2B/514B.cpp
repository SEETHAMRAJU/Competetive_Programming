#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n,x,y,temp2,temp1;
	scanf("%d%d%d",&n,&x,&y);
	vector<pair<int,int>> q;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&temp1,&temp2);
		q.append(make_pair(temp1,temp2));
	}
	map <double,int> m;
	int flag = 0;
	for(int i=0;i<n;i++)
	{
		double req = (y-q[i].second);
		double req2 = (x-q[i].first);
		if(req2 == 0)
			flag++;
		else
		{
			req = req/req2;
			if(m.find(req) == m.end())
			{
				m[req] = 1;
			}
			else
			{
				m[req]++;
			}
		}
	}
	int count = m.size();
	if(flag >0)
		count++;
	printf("%d\n",count);
	return 0;
}





