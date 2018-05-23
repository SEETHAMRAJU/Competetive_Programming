#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector <int> x;
	int temp;
	for(int i=0;i<n;i++)
	{
		cin >> temp;
		x.append(temp);
	}
	vector <int> y;
	y.push_back(x[0]);
	for(int i=1;i<n;i++)
	{
		y.append(y[i-1] + x[i]);
	}
	int q;
	cin >> q;
	vector <int> answer;
	while(q>0)
	{
		int i,j;
		cin >> i >> j;
		if(i != 0)
		{
			answer.append(y[j] - y[i-1]);
		}
		else
		{
			answer.append(y[j]);
		}
		q--;
	}
	for(int i=0;i<answer.size();i++)
	{
		cout << answer[i] << endl;
	}
	return 0;
}
