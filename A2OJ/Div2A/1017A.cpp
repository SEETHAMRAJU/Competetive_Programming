#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	vector <pair<int,int>> q;
	for(int i=0;i<n;i++)
	{
		int temp;
		int tot = 0;
		for(int j=0;j<4;j++)
		{
			scanf("%d",&temp);
			tot += temp;
		}
		q.append(make_pair(tot,i));
	
	}
	sort(q.begin(),q.end());
	reverse(q.begin(),q.end());
	for(int i=0;i<n;i++)
	{
		if(q[i].second == 0)
		{
			if(i != 0 && q[i-1].first == q[i].first)
			{
				int j = i;
				while(q[j].first == q[i].first)
				{
					j--;
				}
				printf("%d\n",j+2);
				return 0;
			}
			else
			{
				printf("%d\n",i+1);
				return 0;
			}
		}
	}
	return 0;
}





