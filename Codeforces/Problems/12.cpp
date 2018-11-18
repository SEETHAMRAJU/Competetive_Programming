#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int max(vector <int> s);
int main()
{
	int n,k;
	cin >> n >> k ;
	vector <int> s;
	for(int i=0;i<n;i++)
	{
		int f,t;
		cin >> f >> t;
		if(t>k)
		{
			s.push_back(f-t+k);
		}
		else
		{
			s.push_back(f);
		}
	}
	cout << max(s) << endl ;
	return 0;
}
int max(vector <int> s)
{
	int maxi = s[0];
	vector <int> :: iterator i;
	for(i=s.begin();i!=s.end();i++)
	{
		if((*i)>maxi)
		{
			maxi = *i;
		}
	}
	return maxi;
}
