#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;
int main()
{
	int t;
	vector <int> a;
	cin >> t;
	while(t>0)
	{
		int n,k,temp;
		cin >> n >> k;
		vector <int> l;
		for(int i=0;i<n;i++)
		{
			cin >> temp;
			l.append(temp);
		}
		int p=0;
		for(int i=0;i<n;i++)
		{
			p = p + (l[i] / k);
		}
		a.append(p);
		--t;
	}
	for(int i=0;i<a.size();i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}

