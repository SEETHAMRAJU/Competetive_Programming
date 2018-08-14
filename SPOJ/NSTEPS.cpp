#include<bits/stdc++.h>
#define append push_back
#define llint long long int
using namespace std;
int main()
{
	llint t;
	vector <llint> answer;
	scanf("%lld",&t);
	for(llint i= 0;i<t;i++)
	{
		llint x,y;
		scanf("%lld %lld",&x,&y);
		if(x == y)
		{		
			if(x  < 2 && y < 2)
				answer.append(x);
			else if(x%2 == 0)			
				answer.append(2*x);
			else
				answer.append(2*x - 1);			
	
		}
		else if(y == x-2)
		{

			if(y%2 == 0)
				answer.append(x+y);
			else
				answer.append(x+y-1);
		}
		else
		{
			answer.append(-1000);
		}
	}
	for(llint i=0;i<answer.size();i++)
	{
		if(answer[i] >-1)		
			printf("%lld\n",answer[i]);
		else
			printf("No Number\n");	
	} 
	return 0;
}
