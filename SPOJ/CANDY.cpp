#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int count = 0;
	vector <int> answer;
	while(1)
	{
		int n,sum,temp;
		sum = 0;
		vector <int> q;
		scanf("%d",&n);
		if(n == -1)
			break;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&temp);
			q.append(temp);
			sum += temp;
		}
		if(sum%n != 0)
			answer.append(-1);
		else
		{
			int ch = 0;
			sum = sum/n;
			for(int i=0;i<n;i++)
			{
				if(sum>q[i])
				ch += sum - q[i];
			}
			answer.append(ch);
		}
		count++;
	}
	for(int i=0;i<count;i++)
	{
		printf("%d\n",answer[i]);
	}
	return 0;
}





