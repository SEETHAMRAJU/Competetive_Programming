#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int m,n,l;
	cin >> n >> m;
	vector <vector<int>> arr;
	vector <vector<int>> ans;
	int tot = 0;
	for(int i=0;i<n;i++)
	{
		vector <int> temp,temp2;
		for(int j=0;j<m;j++)
		{
			cin >> l;
			temp.append(l);
			tot = tot + l;
			temp2.append(1);
		}
		arr.append(temp);
		ans.append(temp2);
	}
	if(tot == n*m)
	{
		cout << "YES" << endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout << "1 ";
			}
			cout << endl;
		}
		return 0;
	
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j] == 0)
			{
				for(int a=0;a<n;a++)
				{
					ans[a][j] = 0;
				}
				for(int b=0;b<m;b++)
				{
					ans[i][b] = 0;
				}
			}
		}
		
	}
	vector <vector<int>> check;
	for(int i=0;i<n;i++)
	{
		vector <int> h;
		for(int j=0;j<m;j++)
		{
			int temp= 0;
			for(int a=0;a<n;a++)
			{
			
				temp = temp + ans[a][j];
			}
			for(int b=0;b<m;b++)
			{
				temp = temp + ans[i][b];
			}
			if(temp == 0)
				h.append(0);
			else
				h.append(1);
			if(arr[i][j] != h[j])
			{
				cout << "NO" << endl;
				return 0;
			}
		}
		check.append(h);
	}
	
	cout << "YES" << endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout << ans[i][j] <<" ";
		}
		cout << endl;
	}

	return 0;
}





