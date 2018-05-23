#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int t,n,temp;
	cin >> t;
	vector <int> answer;
	while(t>0)
	{
		cin >> n;
		vector <int> q;
		for(int i=0;i<n;i++)
		{
			cin >> temp;
			q.append(temp);
		}
		sort(q.begin(),q.end());
		int minsofar = q[1]-q[0];
		for(int i=0;i<n-1;i++)
		{
			minsofar = min(minsofar,(q[i+1] - q[i]));
		}
		answer.append(minsofar);
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		cout << answer[i] << endl;
	}
	return 0;
}





