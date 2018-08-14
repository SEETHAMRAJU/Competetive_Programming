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
		int current = q[0];
		for(int i= 1; i < n ;i++)
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





