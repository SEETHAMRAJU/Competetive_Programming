#include<bits/stdc++.h>
#define append push_back
using namespace std;
int64_t solve(int64_t x,int64_t y);
int main()
{
	int t;
	cin >> t;
	vector <int64_t> answer;
	while(t)
	{
		int64_t n,p;
		cin >> n>>p;
		answer.append((solve(n,p)));
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		cout << answer[i] << endl;
	}
	return 0;
}
int64_t solve(int64_t x,int64_t y)
{
	if(x>y)
	{
		int64_t tot = y-1;
		int64_t i=y;
		while(i<=x)
		{
			tot = (tot * i)%y;
			i++;
		}
	}
	else
	{
		int64_t tot = y-1;
	}
	return tot;
}




