#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int t,temp,m,n;
	cin >> t;
	vector<vector<int>> answer;
	while(t>0)
	{
		cin >> n >> m;
		vector <int> l;
		int a[n+1] = {0};
		for(int i=0;i<m;i++)
		{
			cin >>temp;
			a[temp] = 1;
			l.append(temp);
		}
		int flag = 0;
		vector <int> Ch,As;
		for(int i=1;i<=n;i++)
		{
			if(a[i] != 1 && flag == 0)
			{
				Ch.append(i);
				flag = 1;
			}
			else if(a[i] != 1)
			{
				As.append(i);
				flag = 0;
			}
		}
		if(Ch.size() == 0)
		{
			Ch.append(-1);
		}
		if(As.size() == 0)
		{
			As.append(-1);
		}
		answer.append(Ch);
		answer.append(As);
		t--;

	}
	for(int i=0;i<answer.size();i++)
	{
		if(answer[i][0] == -1)
		{
			cout << " " << endl;
		}
		else
		{
			for(int k=0;k<answer[i].size();k++)
			{
				cout << answer[i][k] << " ";
			}
			cout << "" << endl;
		}
	}
	return 0;
}





