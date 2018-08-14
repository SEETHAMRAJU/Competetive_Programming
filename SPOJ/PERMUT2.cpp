#include<bits/stdc++.h>
#define append push_back
using namespace std;
bool solve(vector <int> q,int n);
int n,temp,cnt;
int main()
{
	vector <bool> answer;
	while(1)
	{
		scanf("%d",&n);
		if(n == 0)
		{
			break;
		}
		else
		{
			vector <int> q;
			for(int i=0;i<n;i++)
			{
				scanf("%d",&temp);
				q.append(temp);			
			}
			//printf("Over\n");
			answer.append(solve(q,n));
			cnt++;		
		}
			
	}
	for(int i=0;i<cnt;i++)
	{
		if(answer[i]) 
			printf("not ambiguous\n");
		else
			printf("ambiguous\n");	
	}
	return 0;
}
bool solve(vector <int> q,int n)
{
	int i=0;
	while(i<n)
	{
		if(q[q[i]-1] != i+1)
			return true;	
		i++;	
	}
	return false;
}

