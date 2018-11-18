#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	vector <pair<int,int>> q;
	int n,x,y;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&x,&y);
		q.append(make_pair(x,y));
	}
	sort(q.begin(),q.end());
	int e = q[0].second;
	for(int i=1;i<n;i++)
	{
		if(q[i].second >=e)
			e = q[i].second;
		else
			e = q[i].first;
	}
	printf("%d\n",e);
	return 0;
}





