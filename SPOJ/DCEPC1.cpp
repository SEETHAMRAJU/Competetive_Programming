#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n,p;
	cin >> n;
	vector <vector<int>> a,b;
	for(int i=0;i<n;i++)
	{
		vector <int> temp;
		for(int j=0;j<n;j++)
		{
			cin >> p;
			temp.append(p);
		}
		a.append(temp);
	}
	for(int i=0;i<n;i++)
	{
		vector <int> temp;
		for(int j=0;j<n;j++)
		{
			cin >> p;
			temp.append(p);
		}
		b.append(temp);
	}
	int q,l,m,k;
	cin >> q;
	char s;
	char o,t;
	o = 'A';
	t = 'B';
	for(int i=0;i<q;i++)
	{
		cin >> s >> l >> m >> k;
		if(s == o)
		{
			a[l][k] = k;
		}
		else if(s == t)
		{
			b[l][k] = k;
		}
	}
	vector <vector <int>> ans;
	for(int i=0;i<n;i++)
	{
		vector <int> temp;
		for(int j=0;j<n;j++)
		{
			temp.append(0);
		}
		ans.append(temp);
	}
	
	//Multiplying
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				ans[i][j] += a[i][k] * b[k][j];		
			}
		}
	}

	int tot = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			tot = tot + ans[i][j];
		}
	}
	cout << tot << endl;
	return 0;
}





