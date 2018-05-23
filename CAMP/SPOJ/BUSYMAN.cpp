#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;
int main()
{
	int t;
	cin >> t;
	vector <int> answer;
	while(t>0)
	{
		int n,temp1,temp2;
		cin >> n;
		vector < pair < int ,int > > schedule;
		for(int i=0;i<n;i++)
		{
			cin >> temp1 >> temp2;
			schedule.append(make_pair(temp2,temp1));
		}
		sort(schedule.begin(),schedule.end());
		int count = 1;
		int present = 0;
		for(int i=1;i<n;i++)
		{
			if(schedule[present].first <= schedule[i].second)
			{
				present = i;
				count++;
			}
		}
		answer.append(count);
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		cout << answer[i] << endl;
	}

	return 0;
}
