#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;
int main()
{
	int s,n;
	cin >> s >> n;

	vector <pair<int,int>> arr;
	int temp1,temp2;
	for(int i=0;i<n;i++)
	{
		cin >> temp1 >> temp2;
		arr.append(make_pair(temp1,temp2));
	}
	sort(arr.begin(),arr.end());
	for(int j=0;j<n;j++)
	{
		if(arr[j].first >= s)
		{
			cout << "NO" << endl;
			return 0;
		}
		s = s + arr[j].second;
	}
	cout << "YES" << endl;
	return 0;
}
