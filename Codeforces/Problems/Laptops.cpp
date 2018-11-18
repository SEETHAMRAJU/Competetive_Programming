#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;
void printvector(vector <int> l);
int main()
{
	int n,temp2,temp1;
	cin >> n;
	vector <pair<int,int>>arr;
	for(int i=0;i<n;i++)
	{
		cin >> temp1>>temp2;
		arr.append(make_pair(temp2,temp1));
	}
	sort(arr.begin(),arr.end());
	vector <int> d1,d2;
	for(int i=0;i<n;i++)
	{
		d1.append(arr[i].second);
		d2.append(arr[i].second);
	}
	sort(d2.begin(),d2.end());
	for(int i=0;i<n;i++)
	{
		if(d1[i] != d2[i])
		{
			cout << "Happy Alex" << endl;
			return 0;
		}
	}
	cout << "Poor Alex" << endl;
	return 0;
}

void printvector(vector <int> l)
{
	for(int i=0;i<l.size();i++)
	{
		cout << l[i] << endl;
	}
}




