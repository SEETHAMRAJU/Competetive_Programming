#include<bits/stdc++.h>
#define append push_back
using namespace std;

int main()
{
	int t;
	vector <int> answer;
	int j=0;
	scanf("%d",&t);
	while(j<t)
	{
		int n,k,temp;
		int tot = 0;
		scanf("%d%d",&k,&n);
		vector <int> q;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&temp);
			q.append(temp);
			tot += temp;
		}
		if(tot < k)
		{
			answer.append(-1);
		}
		else
		{
			sort(q.begin(),q.end());
			reverse(q.begin(),q.end());
			int count = 0;
			int i=0;
			while(k>0)
			{
				k -= q[i];
				i++;
				count++;
			}
			answer.append(count);
		
		}
		j++;
	}
	for(int i=0;i<t;i++)
	{
		if(answer[i] >0)
			printf("Scenario #%d:\n%d\n",i+1,answer[i]);
		else
			printf("Scenario #%d:\nimpossible\n",i+1);
	}
	return 0;
}





