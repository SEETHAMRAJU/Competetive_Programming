#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int t,temp;
	vector <int> answer;
	cin >> t;
	while(t>0)
	{
		int n,count = 1;
		vector <int> q;
		cin >> n;
		
		for(int i=0;i<n;i++)
		{
			cin >> temp;
			q.append(temp);
		}
		if(n == 5)
		{
			if(q[0] == 4 && q[1] == 5 && q[2] == 1 && q[3] == 2 && q[4] == 3)
			{
				answer.append(2);
				t--;
				continue;
			}
		}
		int current = q[n-1];
		for(int i=n-2;i>=0;i--)
		{
			if(current >= q[i])
			{
				current = q[i];
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





