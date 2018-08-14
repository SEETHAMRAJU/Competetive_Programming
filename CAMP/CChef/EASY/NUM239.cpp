#include<bits/stdc++.h>
#define append push_back
using namespace std;
int solve(int L,int R);
int main()
{
	int t;
	scanf("%d",&t);	
	vector <int> answer;
	while(t>0)
	{
		int L,R;
		scanf("%d %d",&L,&R);
		answer.append(solve(L,R));
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		printf("%d\n",answer[i]);
	}
	return 0;
}
int solve(int l,int r)
{
	int count = 0;
	while(l<=r)
	{
		if(l%10 == 2 || l%10 == 3 || l%10 == 9)
		{
			count++;
		}
		l++;
	}	
	return count;
}
