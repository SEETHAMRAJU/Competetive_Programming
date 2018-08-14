#include<bits/stdc++.h>
#define append push_back
using namespace std;
int count(int n);
int main()
{
	int t;
	cin >> t;
	vector <int> answer;
	while(t>0)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		int cnt = 0;
		int i;
		int req = count(a);
		int flag = 0;
		if(b>a)
		{
			while(b>=a)
			{
				
				i = count(b);
				if((i - 1) == req)
				{
					flag = 1;
					answer.append(cnt+1);	
					break;
				}
				b--;
				cnt++;
			}
		}
		else
		{
			while(b>0)
			{
				i = count(b);
				if(i-1 == req)
				{
					flag = 1;
					answer.append(cnt+1);
					break;
				}
				b--;
				cnt++;
			}
		}
		if(flag == 0)
		{
			answer.append(-1);
		}
		
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		printf("%d\n",answer[i]);
	}

	return 0;
}
int count(int n)
{
	unsigned int s = n;
	int cnt = 0;
	while(s)
	{
		s = s&(s-1);
		cnt++;
	}
	return cnt;
}




