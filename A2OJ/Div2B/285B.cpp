#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n,s,t,temp;
	cin >> n >> s >> t;
	vector <int> q;
	for(int i=0;i<n;i++)
	{
		cin >> temp;
		q.append(temp);
	}
	int count = 0;
	int current = s;
	if(s == t)
	{
		cout << "0" << endl;
		return 0;
	}
	while(q[current-1] != t)
	{
		current = q[current-1];
		count++;
		if(count > n+10)
		{
			cout << "-1" << endl;
			return 0;
		}
	}
	cout << count+1 << endl;
	return 0;
}





