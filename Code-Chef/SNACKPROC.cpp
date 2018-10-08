#include<bits/stdc++.h>
#define append push_back
using namespace std;
bool solve(string q);
int main()
{
	int t;
	scanf("%d",&t);
	vector <bool> answer;
	for(int i=0;i<t;i++)
	{
		string q;
		cin >> q;
		answer.append(solve(q));
	}
	for(int i=0;i<t;i++)
	{
		if(answer[i])
			printf("valid\n");
		else
			printf("invalid\n");
	}

	return 0;
}
bool solve(string q)
{
	char cur;
	int i=0;
	for(;i<q.size();i++)
	{
		if(q[i] != '.')
		{
			cur = q[i];
			break;
		}
	}
	if(i == q.size())
		return true;
	i++;
	if(cur == 'T')
		return false;
	for(;i<q.size();i++)
	{
		if(q[i] != '.')
		{
			if(cur == 'H' && q[i] != 'T')
			{
				return false;
			}
		}
		else if(cur == '.' && q[i] == 'H')
		{
			cur = 'H';
		}
		else if(cur == '.' && q[i] == 'T')
			return false;

	}
	return true;

}




