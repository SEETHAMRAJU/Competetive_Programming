#include<bits/stdc++.h>
#define append push_back
using namespace std;
int abs(int a,int b)
{
	return max(a-b,b-a);
}
int main()
{
	int t,n;
	scanf("%d",&t);
	vector <int> answer;
	for(int i=0;i<t;i++)
	{
		vector <int> q,p;
		for(int j=0;j<2;j++)
		{
			int temp;
			scanf("%d",&n);
			for(int k=0;k<n;k++)
			{
				scanf("%d",&temp);
				if(j==0)
					p.append(temp);
				else
					q.append(temp);
			}
			
		}
		sort(p.begin(),p.end());
		sort(q.begin(),q.end());
		int minsofar = INT_MAX;
		for()
		answer.append(minsofar);
	}
	for(int i=0;i<t;i++)
	{
		printf("%d\n",answer[i]);
	}
	return 0;
}





