#include<bits/stdc++.h>
using namespace std;
#define append push_back
int cnt,st;
int main()
{
	int n,temp;
	vector <int> answer;
	scanf("%d",&n);
	while(n>0)
	{
		scanf("%d",&temp);
		if(temp==1)
		{	answer.append(st);			
			st = 1;
			cnt++;
		}
		else
			st++;
		n--;		
	}
	answer.append(st);
	printf("%d\n",cnt);
	for(int i=1;i<answer.size();i++)
	{
		printf("%d ",answer[i]);
	}
	printf("\n");
	return 0;
}
