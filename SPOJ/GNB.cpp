#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int cnt =0;
	vector <int> answer;
	while(1)
	{
		double g,b;
		scanf("%lf%lf",&g,&b);
		if(g == -1)
		{
			break;
		}
		else
		{
			if(g>b)
			{
				answer.append(ceil(g/(b+1)));
			}
			else
			{
				answer.append(ceil(b/(g+1)));
			}
			cnt++;
		}
	}
	for(int i=0;i<cnt;i++)
	{
		printf("%d\n",answer[i]);
	}
	
	return 0;
}





