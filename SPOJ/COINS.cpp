#include<bits/stdc++.h>
#define append push_back
using namespace std;

int main()
{
	int s;
	vector <int> answer;
	while(cin >> s)
	{
		int ans = s/2 + s/3 + s/4;
		if(ans>s)
			answer.append(ans);
		else
		{
			answer.append(s);
		}
	}
	for(int i=0;i<answer.size();i++)
	{
		printf("%d\n",answer[i]);
	}
	return 0;
}
